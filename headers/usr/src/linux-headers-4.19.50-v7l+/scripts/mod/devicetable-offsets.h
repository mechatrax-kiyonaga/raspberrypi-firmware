#ifndef __DEVICETABLE_OFFSETS_H__
#define __DEVICETABLE_OFFSETS_H__
/*
 * DO NOT MODIFY.
 *
 * This file was generated by Kbuild
 */

#define SIZE_usb_device_id 24 /* sizeof(struct usb_device_id) */
#define OFF_usb_device_id_match_flags 0 /* offsetof(struct usb_device_id, match_flags) */
#define OFF_usb_device_id_idVendor 2 /* offsetof(struct usb_device_id, idVendor) */
#define OFF_usb_device_id_idProduct 4 /* offsetof(struct usb_device_id, idProduct) */
#define OFF_usb_device_id_bcdDevice_lo 6 /* offsetof(struct usb_device_id, bcdDevice_lo) */
#define OFF_usb_device_id_bcdDevice_hi 8 /* offsetof(struct usb_device_id, bcdDevice_hi) */
#define OFF_usb_device_id_bDeviceClass 10 /* offsetof(struct usb_device_id, bDeviceClass) */
#define OFF_usb_device_id_bDeviceSubClass 11 /* offsetof(struct usb_device_id, bDeviceSubClass) */
#define OFF_usb_device_id_bDeviceProtocol 12 /* offsetof(struct usb_device_id, bDeviceProtocol) */
#define OFF_usb_device_id_bInterfaceClass 13 /* offsetof(struct usb_device_id, bInterfaceClass) */
#define OFF_usb_device_id_bInterfaceSubClass 14 /* offsetof(struct usb_device_id, bInterfaceSubClass) */
#define OFF_usb_device_id_bInterfaceProtocol 15 /* offsetof(struct usb_device_id, bInterfaceProtocol) */
#define OFF_usb_device_id_bInterfaceNumber 16 /* offsetof(struct usb_device_id, bInterfaceNumber) */
#define SIZE_hid_device_id 16 /* sizeof(struct hid_device_id) */
#define OFF_hid_device_id_bus 0 /* offsetof(struct hid_device_id, bus) */
#define OFF_hid_device_id_group 2 /* offsetof(struct hid_device_id, group) */
#define OFF_hid_device_id_vendor 4 /* offsetof(struct hid_device_id, vendor) */
#define OFF_hid_device_id_product 8 /* offsetof(struct hid_device_id, product) */
#define SIZE_ieee1394_device_id 24 /* sizeof(struct ieee1394_device_id) */
#define OFF_ieee1394_device_id_match_flags 0 /* offsetof(struct ieee1394_device_id, match_flags) */
#define OFF_ieee1394_device_id_vendor_id 4 /* offsetof(struct ieee1394_device_id, vendor_id) */
#define OFF_ieee1394_device_id_model_id 8 /* offsetof(struct ieee1394_device_id, model_id) */
#define OFF_ieee1394_device_id_specifier_id 12 /* offsetof(struct ieee1394_device_id, specifier_id) */
#define OFF_ieee1394_device_id_version 16 /* offsetof(struct ieee1394_device_id, version) */
#define SIZE_pci_device_id 28 /* sizeof(struct pci_device_id) */
#define OFF_pci_device_id_vendor 0 /* offsetof(struct pci_device_id, vendor) */
#define OFF_pci_device_id_device 4 /* offsetof(struct pci_device_id, device) */
#define OFF_pci_device_id_subvendor 8 /* offsetof(struct pci_device_id, subvendor) */
#define OFF_pci_device_id_subdevice 12 /* offsetof(struct pci_device_id, subdevice) */
#define OFF_pci_device_id_class 16 /* offsetof(struct pci_device_id, class) */
#define OFF_pci_device_id_class_mask 20 /* offsetof(struct pci_device_id, class_mask) */
#define SIZE_ccw_device_id 12 /* sizeof(struct ccw_device_id) */
#define OFF_ccw_device_id_match_flags 0 /* offsetof(struct ccw_device_id, match_flags) */
#define OFF_ccw_device_id_cu_type 2 /* offsetof(struct ccw_device_id, cu_type) */
#define OFF_ccw_device_id_cu_model 6 /* offsetof(struct ccw_device_id, cu_model) */
#define OFF_ccw_device_id_dev_type 4 /* offsetof(struct ccw_device_id, dev_type) */
#define OFF_ccw_device_id_dev_model 7 /* offsetof(struct ccw_device_id, dev_model) */
#define SIZE_ap_device_id 8 /* sizeof(struct ap_device_id) */
#define OFF_ap_device_id_dev_type 2 /* offsetof(struct ap_device_id, dev_type) */
#define SIZE_css_device_id 8 /* sizeof(struct css_device_id) */
#define OFF_css_device_id_type 1 /* offsetof(struct css_device_id, type) */
#define SIZE_serio_device_id 4 /* sizeof(struct serio_device_id) */
#define OFF_serio_device_id_type 0 /* offsetof(struct serio_device_id, type) */
#define OFF_serio_device_id_proto 3 /* offsetof(struct serio_device_id, proto) */
#define OFF_serio_device_id_id 2 /* offsetof(struct serio_device_id, id) */
#define OFF_serio_device_id_extra 1 /* offsetof(struct serio_device_id, extra) */
#define SIZE_acpi_device_id 24 /* sizeof(struct acpi_device_id) */
#define OFF_acpi_device_id_id 0 /* offsetof(struct acpi_device_id, id) */
#define OFF_acpi_device_id_cls 16 /* offsetof(struct acpi_device_id, cls) */
#define OFF_acpi_device_id_cls_msk 20 /* offsetof(struct acpi_device_id, cls_msk) */
#define SIZE_pnp_device_id 12 /* sizeof(struct pnp_device_id) */
#define OFF_pnp_device_id_id 0 /* offsetof(struct pnp_device_id, id) */
#define SIZE_pnp_card_device_id 76 /* sizeof(struct pnp_card_device_id) */
#define OFF_pnp_card_device_id_devs 12 /* offsetof(struct pnp_card_device_id, devs) */
#define SIZE_pcmcia_device_id 52 /* sizeof(struct pcmcia_device_id) */
#define OFF_pcmcia_device_id_match_flags 0 /* offsetof(struct pcmcia_device_id, match_flags) */
#define OFF_pcmcia_device_id_manf_id 2 /* offsetof(struct pcmcia_device_id, manf_id) */
#define OFF_pcmcia_device_id_card_id 4 /* offsetof(struct pcmcia_device_id, card_id) */
#define OFF_pcmcia_device_id_func_id 6 /* offsetof(struct pcmcia_device_id, func_id) */
#define OFF_pcmcia_device_id_function 7 /* offsetof(struct pcmcia_device_id, function) */
#define OFF_pcmcia_device_id_device_no 8 /* offsetof(struct pcmcia_device_id, device_no) */
#define OFF_pcmcia_device_id_prod_id_hash 12 /* offsetof(struct pcmcia_device_id, prod_id_hash) */
#define SIZE_of_device_id 196 /* sizeof(struct of_device_id) */
#define OFF_of_device_id_name 0 /* offsetof(struct of_device_id, name) */
#define OFF_of_device_id_type 32 /* offsetof(struct of_device_id, type) */
#define OFF_of_device_id_compatible 64 /* offsetof(struct of_device_id, compatible) */
#define SIZE_vio_device_id 64 /* sizeof(struct vio_device_id) */
#define OFF_vio_device_id_type 0 /* offsetof(struct vio_device_id, type) */
#define OFF_vio_device_id_compat 32 /* offsetof(struct vio_device_id, compat) */
#define SIZE_input_device_id 164 /* sizeof(struct input_device_id) */
#define OFF_input_device_id_flags 0 /* offsetof(struct input_device_id, flags) */
#define OFF_input_device_id_bustype 4 /* offsetof(struct input_device_id, bustype) */
#define OFF_input_device_id_vendor 6 /* offsetof(struct input_device_id, vendor) */
#define OFF_input_device_id_product 8 /* offsetof(struct input_device_id, product) */
#define OFF_input_device_id_version 10 /* offsetof(struct input_device_id, version) */
#define OFF_input_device_id_evbit 12 /* offsetof(struct input_device_id, evbit) */
#define OFF_input_device_id_keybit 16 /* offsetof(struct input_device_id, keybit) */
#define OFF_input_device_id_relbit 112 /* offsetof(struct input_device_id, relbit) */
#define OFF_input_device_id_absbit 116 /* offsetof(struct input_device_id, absbit) */
#define OFF_input_device_id_mscbit 124 /* offsetof(struct input_device_id, mscbit) */
#define OFF_input_device_id_ledbit 128 /* offsetof(struct input_device_id, ledbit) */
#define OFF_input_device_id_sndbit 132 /* offsetof(struct input_device_id, sndbit) */
#define OFF_input_device_id_ffbit 136 /* offsetof(struct input_device_id, ffbit) */
#define OFF_input_device_id_swbit 152 /* offsetof(struct input_device_id, swbit) */
#define SIZE_eisa_device_id 12 /* sizeof(struct eisa_device_id) */
#define OFF_eisa_device_id_sig 0 /* offsetof(struct eisa_device_id, sig) */
#define SIZE_parisc_device_id 8 /* sizeof(struct parisc_device_id) */
#define OFF_parisc_device_id_hw_type 0 /* offsetof(struct parisc_device_id, hw_type) */
#define OFF_parisc_device_id_hversion 2 /* offsetof(struct parisc_device_id, hversion) */
#define OFF_parisc_device_id_hversion_rev 1 /* offsetof(struct parisc_device_id, hversion_rev) */
#define OFF_parisc_device_id_sversion 4 /* offsetof(struct parisc_device_id, sversion) */
#define SIZE_sdio_device_id 12 /* sizeof(struct sdio_device_id) */
#define OFF_sdio_device_id_class 0 /* offsetof(struct sdio_device_id, class) */
#define OFF_sdio_device_id_vendor 2 /* offsetof(struct sdio_device_id, vendor) */
#define OFF_sdio_device_id_device 4 /* offsetof(struct sdio_device_id, device) */
#define SIZE_ssb_device_id 6 /* sizeof(struct ssb_device_id) */
#define OFF_ssb_device_id_vendor 0 /* offsetof(struct ssb_device_id, vendor) */
#define OFF_ssb_device_id_coreid 2 /* offsetof(struct ssb_device_id, coreid) */
#define OFF_ssb_device_id_revision 4 /* offsetof(struct ssb_device_id, revision) */
#define SIZE_bcma_device_id 6 /* sizeof(struct bcma_device_id) */
#define OFF_bcma_device_id_manuf 0 /* offsetof(struct bcma_device_id, manuf) */
#define OFF_bcma_device_id_id 2 /* offsetof(struct bcma_device_id, id) */
#define OFF_bcma_device_id_rev 4 /* offsetof(struct bcma_device_id, rev) */
#define OFF_bcma_device_id_class 5 /* offsetof(struct bcma_device_id, class) */
#define SIZE_virtio_device_id 8 /* sizeof(struct virtio_device_id) */
#define OFF_virtio_device_id_device 0 /* offsetof(struct virtio_device_id, device) */
#define OFF_virtio_device_id_vendor 4 /* offsetof(struct virtio_device_id, vendor) */
#define SIZE_hv_vmbus_device_id 20 /* sizeof(struct hv_vmbus_device_id) */
#define OFF_hv_vmbus_device_id_guid 0 /* offsetof(struct hv_vmbus_device_id, guid) */
#define SIZE_rpmsg_device_id 32 /* sizeof(struct rpmsg_device_id) */
#define OFF_rpmsg_device_id_name 0 /* offsetof(struct rpmsg_device_id, name) */
#define SIZE_i2c_device_id 24 /* sizeof(struct i2c_device_id) */
#define OFF_i2c_device_id_name 0 /* offsetof(struct i2c_device_id, name) */
#define SIZE_spi_device_id 36 /* sizeof(struct spi_device_id) */
#define OFF_spi_device_id_name 0 /* offsetof(struct spi_device_id, name) */
#define SIZE_dmi_system_id 332 /* sizeof(struct dmi_system_id) */
#define OFF_dmi_system_id_matches 8 /* offsetof(struct dmi_system_id, matches) */
#define SIZE_platform_device_id 24 /* sizeof(struct platform_device_id) */
#define OFF_platform_device_id_name 0 /* offsetof(struct platform_device_id, name) */
#define SIZE_mdio_device_id 8 /* sizeof(struct mdio_device_id) */
#define OFF_mdio_device_id_phy_id 0 /* offsetof(struct mdio_device_id, phy_id) */
#define OFF_mdio_device_id_phy_id_mask 4 /* offsetof(struct mdio_device_id, phy_id_mask) */
#define SIZE_zorro_device_id 8 /* sizeof(struct zorro_device_id) */
#define OFF_zorro_device_id_id 0 /* offsetof(struct zorro_device_id, id) */
#define SIZE_isapnp_device_id 12 /* sizeof(struct isapnp_device_id) */
#define OFF_isapnp_device_id_vendor 4 /* offsetof(struct isapnp_device_id, vendor) */
#define OFF_isapnp_device_id_function 6 /* offsetof(struct isapnp_device_id, function) */
#define SIZE_ipack_device_id 12 /* sizeof(struct ipack_device_id) */
#define OFF_ipack_device_id_format 0 /* offsetof(struct ipack_device_id, format) */
#define OFF_ipack_device_id_vendor 4 /* offsetof(struct ipack_device_id, vendor) */
#define OFF_ipack_device_id_device 8 /* offsetof(struct ipack_device_id, device) */
#define SIZE_amba_id 12 /* sizeof(struct amba_id) */
#define OFF_amba_id_id 0 /* offsetof(struct amba_id, id) */
#define OFF_amba_id_mask 4 /* offsetof(struct amba_id, mask) */
#define SIZE_mips_cdmm_device_id 1 /* sizeof(struct mips_cdmm_device_id) */
#define OFF_mips_cdmm_device_id_type 0 /* offsetof(struct mips_cdmm_device_id, type) */
#define SIZE_x86_cpu_id 12 /* sizeof(struct x86_cpu_id) */
#define OFF_x86_cpu_id_feature 6 /* offsetof(struct x86_cpu_id, feature) */
#define OFF_x86_cpu_id_family 2 /* offsetof(struct x86_cpu_id, family) */
#define OFF_x86_cpu_id_model 4 /* offsetof(struct x86_cpu_id, model) */
#define OFF_x86_cpu_id_vendor 0 /* offsetof(struct x86_cpu_id, vendor) */
#define SIZE_cpu_feature 2 /* sizeof(struct cpu_feature) */
#define OFF_cpu_feature_feature 0 /* offsetof(struct cpu_feature, feature) */
#define SIZE_mei_cl_device_id 56 /* sizeof(struct mei_cl_device_id) */
#define OFF_mei_cl_device_id_name 0 /* offsetof(struct mei_cl_device_id, name) */
#define OFF_mei_cl_device_id_uuid 32 /* offsetof(struct mei_cl_device_id, uuid) */
#define OFF_mei_cl_device_id_version 48 /* offsetof(struct mei_cl_device_id, version) */
#define SIZE_rio_device_id 8 /* sizeof(struct rio_device_id) */
#define OFF_rio_device_id_did 0 /* offsetof(struct rio_device_id, did) */
#define OFF_rio_device_id_vid 2 /* offsetof(struct rio_device_id, vid) */
#define OFF_rio_device_id_asm_did 4 /* offsetof(struct rio_device_id, asm_did) */
#define OFF_rio_device_id_asm_vid 6 /* offsetof(struct rio_device_id, asm_vid) */
#define SIZE_ulpi_device_id 8 /* sizeof(struct ulpi_device_id) */
#define OFF_ulpi_device_id_vendor 0 /* offsetof(struct ulpi_device_id, vendor) */
#define OFF_ulpi_device_id_product 2 /* offsetof(struct ulpi_device_id, product) */
#define SIZE_hda_device_id 20 /* sizeof(struct hda_device_id) */
#define OFF_hda_device_id_vendor_id 0 /* offsetof(struct hda_device_id, vendor_id) */
#define OFF_hda_device_id_rev_id 4 /* offsetof(struct hda_device_id, rev_id) */
#define OFF_hda_device_id_api_version 8 /* offsetof(struct hda_device_id, api_version) */
#define SIZE_sdw_device_id 8 /* sizeof(struct sdw_device_id) */
#define OFF_sdw_device_id_mfg_id 0 /* offsetof(struct sdw_device_id, mfg_id) */
#define OFF_sdw_device_id_part_id 2 /* offsetof(struct sdw_device_id, part_id) */
#define SIZE_fsl_mc_device_id 18 /* sizeof(struct fsl_mc_device_id) */
#define OFF_fsl_mc_device_id_vendor 0 /* offsetof(struct fsl_mc_device_id, vendor) */
#define OFF_fsl_mc_device_id_obj_type 2 /* offsetof(struct fsl_mc_device_id, obj_type) */
#define SIZE_tb_service_id 32 /* sizeof(struct tb_service_id) */
#define OFF_tb_service_id_match_flags 0 /* offsetof(struct tb_service_id, match_flags) */
#define OFF_tb_service_id_protocol_key 4 /* offsetof(struct tb_service_id, protocol_key) */
#define OFF_tb_service_id_protocol_id 16 /* offsetof(struct tb_service_id, protocol_id) */
#define OFF_tb_service_id_protocol_version 20 /* offsetof(struct tb_service_id, protocol_version) */
#define OFF_tb_service_id_protocol_revision 24 /* offsetof(struct tb_service_id, protocol_revision) */
#define SIZE_typec_device_id 8 /* sizeof(struct typec_device_id) */
#define OFF_typec_device_id_svid 0 /* offsetof(struct typec_device_id, svid) */
#define OFF_typec_device_id_mode 2 /* offsetof(struct typec_device_id, mode) */

#endif
