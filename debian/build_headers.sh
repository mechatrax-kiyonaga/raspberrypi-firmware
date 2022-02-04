#!/bin/bash -e

echo "Building headers..."
echo "+" > linux/.scmversion

export ARCH CROSS_COMPILE
for version in $(cut -d ' ' -f 3 extra/uname_string*); do
	if [ "$DEB_BUILD_ARCH" != "armhf" ]; then
		TARGET="arm-linux-gnueabihf"
		CROSS_COMPILE="${TARGET}-"
	else
		CROSS_COMPILE=""
	fi
	case $version in
	*-v8+)
		if [ "$DEB_BUILD_ARCH" != "arm64" ]; then
			TARGET="aarch64-linux-gnu"
			CROSS_COMPILE="${TARGET}-"
		else
			CROSS_COMPILE=""
		fi
		ARCH="arm64"
		DEFCONFIG="bcm2711_defconfig"
		VER="8"
		;;
	*-v7l+)
		ARCH="arm"
		DEFCONFIG="bcm2711_defconfig"
		VER="7l"
		;;
	*-v7+)
		ARCH="arm"
		DEFCONFIG="bcm2709_defconfig"
		VER="7"
		;;
	*+)
		ARCH="arm"
		DEFCONFIG="bcmrpi_defconfig"
		VER=""
		;;
	*)
		echo "Unknown version: $version"
		exit 1
		;;
	esac
	(
		cd linux
		make HOSTCC=${CROSS_COMPILE}gcc HOSTCXX=${CROSS_COMPILE}g++ HOSTLD=${CROSS_COMPILE}ld distclean $DEFCONFIG modules_prepare
	)
	cp "extra/Module${VER}.symvers" linux/Module.symvers

	destdir="debian/raspberrypi-kernel-headers-mtx/usr/src/linux-headers-$version"
	mkdir -p "$destdir" "debian/raspberrypi-kernel-headers-mtx/lib/modules/$version"
	rsync -aHAX \
		--files-from=<(cd linux; find . -name Makefile\* -o -name Kconfig\* -o -name \*.pl) linux/ "$destdir/"
	rsync -aHAX \
		--files-from=<(cd linux; find "arch/${ARCH}/include" include scripts -type f) linux/ "$destdir/"
	rsync -aHAX \
		--files-from=<(cd linux; find "arch/${ARCH}" -name module.lds -o -name Kbuild.platforms -o -name Platform) linux/ "$destdir/"
	rsync -aHAX \
		--files-from=<(cd linux; find $(find "arch/${ARCH}" -name include -o -name scripts -type d) -type f) linux/ "$destdir/"
	rsync -aHAX \
		--files-from=<(cd linux; find "arch/${ARCH}/include" Module.symvers .config include scripts -type f) linux/ "$destdir/"
	rm -f "debian/raspberrypi-kernel-headers-mtx/lib/modules/$version/build"
	ln -sf "/usr/src/linux-headers-$version" "debian/raspberrypi-kernel-headers-mtx/lib/modules/$version/build"
	(
		cd linux
		make distclean
	)
done

# Build linux-libc-dev
destdir="debian/linux-libc-dev/usr"
mkdir -p "$destdir"
(
	cd linux
	make headers_check
	make headers_install INSTALL_HDR_PATH="../$destdir"
	make distclean
)

rm -rf "${destdir}/include/drm" "${destdir}/include/scsi"
find "${destdir}/include" \( -name .install -o -name ..install.cmd \) -execdir rm {} +

# Move include/asm to arch-specific directory
mkdir -p "${destdir}/include/${DEB_HOST_MULTIARCH}"
mv "${destdir}/include/asm" "${destdir}/include/${DEB_HOST_MULTIARCH}/"
if [ -d "${destdir}/include/arch" ]; then
	mv "${destdir}/include/arch" "${destdir}/include/${DEB_HOST_MULTIARCH}/"
fi

rm linux/.scmversion
find debian/raspberrypi-kernel-headers-mtx -name ".git*" -delete
find debian/raspberrypi-kernel-headers-mtx -type f -name ".*.cmd" -delete
find debian/raspberrypi-kernel-headers-mtx -type f -name "*.o" -delete
