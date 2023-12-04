Lights1 bullet_bill_eyes_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 bullet_bill_mouth_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx bullet_bill_eye_ci8_aligner[] = {gsSPEndDisplayList()};
u8 bullet_bill_eye_ci8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x04, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x05, 0x06, 0x07, 0x02, 0x02, 0x07, 
	0x06, 0x05, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x08, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x06, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x05, 0x06, 0x02, 0x09, 0x0a, 0x0b, 0x0c, 
	0x09, 0x07, 0x05, 0x01, 0x01, 0x01, 0x01, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x0d, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x0e, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x01, 0x05, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x05, 0x0f, 0x0c, 0x10, 0x11, 0x12, 0x11, 
	0x13, 0x14, 0x07, 0x05, 0x01, 0x01, 0x01, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x15, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x16, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x05, 0x07, 0x14, 0x10, 0x17, 0x16, 0x0d, 0x18, 
	0x12, 0x13, 0x19, 0x06, 0x01, 0x01, 0x06, 0x0e, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x11, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x17, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x05, 0x02, 0x0b, 0x1a, 0x16, 0x0e, 0x0e, 0x15, 
	0x18, 0x1b, 0x14, 0x07, 0x01, 0x05, 0x0e, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x19, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x0b, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x0e, 0x06, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x05, 0x0f, 0x1c, 0x1d, 0x1e, 0x0e, 0x03, 0x0e, 
	0x0d, 0x1a, 0x0a, 0x07, 0x01, 0x01, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x18, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x18, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x15, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x05, 0x02, 0x0b, 0x12, 0x0d, 0x0e, 0x0e, 0x15, 
	0x16, 0x11, 0x0c, 0x07, 0x01, 0x05, 0x0e, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x13, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x0c, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x06, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x05, 0x07, 0x14, 0x1f, 0x04, 0x0d, 0x1e, 0x0d, 
	0x17, 0x10, 0x09, 0x01, 0x07, 0x0d, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x0e, 0x06, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x04, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x0d, 0x02, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x06, 0x0f, 0x0a, 0x1f, 0x1d, 0x17, 0x12, 
	0x10, 0x0c, 0x01, 0x0f, 0x0d, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x1a, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x09, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x0d, 
	0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x05, 0x06, 0x0f, 0x0c, 0x1c, 0x13, 0x0b, 
	0x14, 0x01, 0x19, 0x0d, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x09, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x1d, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x0d, 0x05, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x05, 0x06, 0x07, 0x0f, 0x02, 0x02, 
	0x01, 0x19, 0x0d, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x16, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x0f, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x15, 0x02, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x01, 
	0x05, 0x0d, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x0c, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x10, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x0d, 0x06, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x06, 0x15, 0x03, 
	0x0e, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x13, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x14, 0x0d, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x0e, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x0e, 0x03, 0x0e, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x1f, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x06, 
	0x1a, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x0c, 0x1e, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x04, 0x05, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x06, 0x12, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x16, 
	0x06, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x0a, 0x1e, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x1e, 0x07, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x1d, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x15, 0x04, 0x1f, 0x0c, 0x06, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x09, 
	0x0b, 0x13, 0x1b, 0x12, 0x04, 0x16, 0x15, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x16, 0x1a, 
	0x1c, 0x0f, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 
	0x02, 0x09, 0x0a, 0x13, 0x14, 0x06, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx bullet_bill_eye_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 bullet_bill_eye_ci8_pal_rgba16[] = {
	0x03, 0x77, 0x00, 0x01, 0x21, 0x09, 0xff, 0xff, 
	0xbd, 0xef, 0x08, 0x43, 0x10, 0x85, 0x18, 0xc7, 
	0xc6, 0x31, 0x39, 0xcf, 0x52, 0x95, 0x5a, 0xd7, 
	0x4a, 0x53, 0xde, 0xf7, 0xf7, 0xbd, 0x29, 0x4b, 
	0x7b, 0xdf, 0x94, 0xa5, 0xa5, 0x29, 0x6b, 0x5b, 
	0x42, 0x11, 0xef, 0x7b, 0xd6, 0xb5, 0xb5, 0xad, 
	0xce, 0x73, 0x31, 0x8d, 0x9c, 0xe7, 0x8c, 0x63, 
	0x63, 0x19, 0xad, 0x6b, 0xe7, 0x39, 0x84, 0x21, 
	
};

Gfx bullet_bill_teeth2_i8_aligner[] = {gsSPEndDisplayList()};
u8 bullet_bill_teeth2_i8[] = {
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0x98, 0xc1, 0xfa, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xfd, 0xbe, 0x75, 0x73, 0xbb, 0xfe, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xfa, 0xb2, 0x71, 0x75, 0xc4, 0xfe, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xf8, 0xbb, 0x7f, 0xb3, 
	0xb3, 0x95, 0xa4, 0xee, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xf4, 0xa9, 0x71, 0x6c, 0xa2, 0xf3, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xea, 0x98, 0x6e, 0x6f, 0xb9, 0xfd, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xe1, 0x97, 0x7b, 0xb3, 
	0xb3, 0x9b, 0x89, 0xd5, 0xfe, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xfe, 0xe2, 0x95, 0x74, 0x74, 0x8b, 0xda, 
	0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
	0xcb, 0x83, 0x78, 0x6d, 0xab, 0xf7, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xf9, 0xbd, 0x7d, 0x93, 0xb3, 
	0xb3, 0xa7, 0x77, 0xb9, 0xf9, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xfd, 0xca, 0x83, 0x85, 0x89, 0x7a, 0xc1, 
	0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0xab, 0x7a, 0x8b, 0x73, 0x99, 0xe8, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xe4, 0x98, 0x7c, 0xb4, 0xb3, 
	0xb3, 0xb6, 0x7a, 0x99, 0xe7, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xf7, 0xb3, 0x7a, 0xa0, 0xa7, 0x71, 0xa6, 
	0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xd9, 
	0x8e, 0x80, 0xa7, 0x80, 0x8a, 0xd7, 0xfe, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xfa, 0xc1, 0x7c, 0x8f, 0xd4, 0xb3, 
	0xb3, 0xc6, 0x8b, 0x7f, 0xca, 0xfe, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xe7, 0x9c, 0x7b, 0xbb, 0xc8, 0x7f, 0x8d, 
	0xd9, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xba, 
	0x7b, 0x98, 0xc8, 0x90, 0x7d, 0xc8, 0xfe, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xe4, 0x9a, 0x78, 0xb1, 0xe8, 0xb3, 
	0xb3, 0xd3, 0xa6, 0x6d, 0xac, 0xf5, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xfe, 0xd1, 0x87, 0x89, 0xd3, 0xe3, 0x97, 0x7c, 
	0xbf, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe5, 0x9a, 
	0x7b, 0xb6, 0xe7, 0xa0, 0x74, 0xb9, 0xfc, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xfa, 0xbf, 0x7b, 0x89, 0xd5, 0xf0, 0xb3, 
	0xb3, 0xda, 0xc3, 0x79, 0x8c, 0xdb, 0xfe, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xfa, 0xb9, 0x7b, 0x9f, 0xea, 0xf7, 0xb2, 0x75, 
	0xa4, 0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xc7, 0x81, 
	0x8d, 0xd5, 0xf9, 0xb3, 0x70, 0xaa, 0xf5, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xfe, 0xe7, 0x9b, 0x71, 0xaf, 0xf5, 0xed, 0xb3, 
	0xb3, 0xdb, 0xe1, 0x94, 0x7a, 0xbd, 0xfb, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xec, 0xa2, 0x79, 0xb7, 0xf9, 0xfd, 0xcd, 0x83, 
	0x8c, 0xd6, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xa8, 0x77, 
	0xa9, 0xf0, 0xfd, 0xc2, 0x78, 0x98, 0xe5, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xfb, 0xc4, 0x7f, 0x8a, 0xd5, 0xff, 0xeb, 0xb3, 
	0xb3, 0xdb, 0xf7, 0xb3, 0x73, 0xa0, 0xeb, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
	0xd5, 0x8a, 0x85, 0xcd, 0xff, 0xff, 0xe5, 0x9a, 
	0x7b, 0xbc, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfe, 0xd5, 0x89, 0x81, 
	0xc8, 0xfd, 0xfe, 0xd0, 0x84, 0x8a, 0xd5, 0xfe, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xe9, 0xa0, 0x76, 0xae, 0xf4, 0xff, 0xe9, 0xb3, 
	0xb3, 0xdb, 0xfe, 0xcf, 0x84, 0x87, 0xd0, 0xfe, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 
	0xbe, 0x7b, 0x99, 0xe4, 0xff, 0xff, 0xf7, 0xb5, 
	0x7a, 0xa0, 0xec, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xf6, 0xb4, 0x74, 0x9a, 
	0xe7, 0xff, 0xff, 0xe0, 0x92, 0x7e, 0xc7, 0xfe, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 
	0xc7, 0x83, 0x89, 0xd3, 0xfe, 0xff, 0xe5, 0xb3, 
	0xb3, 0xdb, 0xff, 0xea, 0x9f, 0x7a, 0xb4, 0xf6, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 
	0xa6, 0x7a, 0xb1, 0xf6, 0xff, 0xff, 0xfe, 0xce, 
	0x86, 0x89, 0xd3, 0xfe, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xfe, 0xdf, 0x91, 0x76, 0xb9, 
	0xfa, 0xff, 0xff, 0xf0, 0xa4, 0x76, 0xb8, 0xfb, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 
	0xa2, 0x7b, 0xaa, 0xef, 0xff, 0xff, 0xe4, 0xb3, 
	0xb3, 0xdb, 0xff, 0xfb, 0xbc, 0x7b, 0x97, 0xe2, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xda, 
	0x8e, 0x82, 0xc8, 0xfe, 0xff, 0xff, 0xff, 0xe7, 
	0x9c, 0x7a, 0xba, 0xfa, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xfb, 0xc0, 0x7b, 0x8e, 0xdd, 
	0xff, 0xff, 0xff, 0xfa, 0xb6, 0x74, 0xa8, 0xf3, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xcb, 
	0x85, 0x87, 0xce, 0xfd, 0xff, 0xff, 0xe0, 0xb3, 
	0xb3, 0xdb, 0xff, 0xfe, 0xd9, 0x8e, 0x80, 0xc7, 
	0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xc2, 
	0x7c, 0x94, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xf7, 
	0xb7, 0x7b, 0x9e, 0xea, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xed, 0xa2, 0x73, 0xb1, 0xf7, 
	0xff, 0xff, 0xff, 0xfd, 0xc4, 0x7c, 0x96, 0xe3, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xed, 0xa6, 
	0x78, 0xa6, 0xed, 0xff, 0xff, 0xff, 0xdf, 0xb3, 
	0xb3, 0xdb, 0xff, 0xff, 0xf0, 0xa9, 0x7a, 0xaa, 
	0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0xac, 
	0x74, 0xab, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xfd, 
	0xd0, 0x87, 0x86, 0xd1, 0xfe, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xfd, 0xce, 0x86, 0x85, 0xcf, 0xfe, 
	0xff, 0xff, 0xff, 0xfe, 0xd2, 0x88, 0x89, 0xd2, 
	0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xce, 0x82, 
	0x84, 0xcb, 0xfd, 0xff, 0xff, 0xff, 0xdb, 0xb3, 
	0xb3, 0xdb, 0xff, 0xff, 0xfc, 0xc7, 0x82, 0x8e, 
	0xd9, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xe1, 0x93, 
	0x7c, 0xc1, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xe8, 0x9f, 0x77, 0xb7, 0xf9, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xf3, 0xae, 0x7a, 0xa2, 0xeb, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xe3, 0x96, 0x7e, 0xc4, 
	0xfe, 0xff, 0xff, 0xff, 0xff, 0xef, 0xa7, 0x6d, 
	0xa3, 0xee, 0xff, 0xff, 0xff, 0xff, 0xd9, 0xb3, 
	0xb3, 0xdb, 0xff, 0xff, 0xff, 0xe3, 0x98, 0x7b, 
	0xbd, 0xfa, 0xff, 0xff, 0xff, 0xfe, 0xca, 0x7e, 
	0x8d, 0xda, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xf9, 0xb9, 0x78, 0x9b, 0xe8, 0xff, 0xff, 0xff, 
	0xff, 0xfe, 0xdc, 0x91, 0x7f, 0xc2, 0xfc, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xf2, 0xa7, 0x78, 0xb5, 
	0xfa, 0xff, 0xff, 0xff, 0xfc, 0xce, 0x83, 0x7f, 
	0xc9, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xd7, 0xb3, 
	0xb3, 0xdb, 0xff, 0xff, 0xff, 0xf6, 0xb4, 0x7a, 
	0x9e, 0xeb, 0xff, 0xff, 0xff, 0xf7, 0xb1, 0x70, 
	0xa6, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xfe, 0xd2, 0x87, 0x83, 0xce, 0xfe, 0xff, 0xff, 
	0xff, 0xfa, 0xbd, 0x7c, 0x95, 0xe0, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfa, 0xb8, 0x77, 0xa5, 
	0xf0, 0xff, 0xff, 0xff, 0xee, 0xa9, 0x75, 0xa3, 
	0xec, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd3, 0xb3, 
	0xb3, 0xdb, 0xff, 0xff, 0xff, 0xfd, 0xd1, 0x88, 
	0x85, 0xcf, 0xfe, 0xff, 0xfe, 0xe4, 0x96, 0x75, 
	0xbd, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xeb, 0xa0, 0x71, 0xb3, 0xf7, 0xff, 0xff, 
	0xff, 0xe7, 0x9d, 0x7b, 0xb4, 0xf6, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfd, 0xc7, 0x7f, 0x94, 
	0xe0, 0xff, 0xff, 0xfd, 0xd1, 0x89, 0x82, 0xc8, 
	0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd2, 0xb3, 
	0xb3, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xec, 0xa1, 
	0x73, 0xb3, 0xf7, 0xff, 0xfe, 0xcd, 0x81, 0x86, 
	0xd5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xfa, 0xba, 0x74, 0x96, 0xe5, 0xfe, 0xff, 
	0xfc, 0xca, 0x82, 0x8b, 0xd3, 0xfe, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfe, 0xd6, 0x8b, 0x87, 
	0xd1, 0xfe, 0xff, 0xf0, 0xac, 0x7b, 0x9f, 0xea, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 0xb9, 0xb3, 
	0xb3, 0xc5, 0xfa, 0xff, 0xff, 0xff, 0xfa, 0xbd, 
	0x7a, 0x92, 0xe1, 0xff, 0xf8, 0xb5, 0x74, 0x9f, 
	0xec, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xfe, 0xd6, 0x88, 0x80, 0xcb, 0xfd, 0xff, 
	0xf1, 0xaa, 0x77, 0xa7, 0xef, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x9a, 0x7e, 
	0xc2, 0xfd, 0xfd, 0xd3, 0x8a, 0x82, 0xc6, 0xfc, 
	0xff, 0xff, 0xff, 0xfe, 0xd9, 0xb4, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xbe, 0xf4, 0xff, 0xff, 0xfe, 0xdb, 
	0x8d, 0x79, 0xc3, 0xfd, 0xe8, 0x9d, 0x75, 0xba, 
	0xfa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xee, 0xa4, 0x74, 0xb0, 0xf6, 0xfe, 
	0xd8, 0x8a, 0x80, 0xc6, 0xfd, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xab, 0x78, 
	0xb4, 0xf9, 0xf5, 0xb1, 0x78, 0x9d, 0xe6, 0xff, 
	0xff, 0xff, 0xf9, 0xc8, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb8, 0xea, 0xff, 0xff, 0xf5, 
	0xad, 0x6e, 0xa6, 0xf0, 0xd3, 0x88, 0x85, 0xcf, 
	0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xfb, 0xbf, 0x78, 0x95, 0xe1, 0xf7, 
	0xb7, 0x75, 0x98, 0xe4, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xbb, 0x79, 
	0xa2, 0xec, 0xd9, 0x8c, 0x7f, 0xc1, 0xfa, 0xff, 
	0xff, 0xee, 0xbc, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb4, 0xdf, 0xff, 0xfe, 
	0xca, 0x7f, 0x8b, 0xd3, 0xbb, 0x7a, 0x9a, 0xe8, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xfe, 0xd9, 0x8d, 0x81, 0xc7, 0xe0, 
	0x93, 0x75, 0xb8, 0xf8, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xc8, 0x81, 
	0x92, 0xd6, 0xb2, 0x75, 0x99, 0xe5, 0xff, 0xff, 
	0xdf, 0xb4, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xd3, 0xfe, 
	0xe6, 0x99, 0x7a, 0xaf, 0xa2, 0x74, 0xb4, 0xf9, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xef, 0xa7, 0x79, 0xad, 0xbc, 
	0x7c, 0x8d, 0xd9, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xd8, 0x8e, 
	0x85, 0xb4, 0x8c, 0x7a, 0xbd, 0xf9, 0xfb, 0xcc, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xc8, 
	0xf3, 0xb8, 0x77, 0x8f, 0x88, 0x82, 0xcb, 0xfe, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xfb, 0xc1, 0x7c, 0x90, 0x98, 
	0x71, 0xae, 0xf5, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x9d, 
	0x7b, 0x94, 0x76, 0x95, 0xe3, 0xf2, 0xbf, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xbe, 0xd0, 0x88, 0x7b, 0x77, 0x95, 0xe3, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xfe, 0xda, 0x90, 0x7b, 0x7e, 
	0x82, 0xcd, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0xad, 
	0x74, 0x7c, 0x7a, 0xbd, 0xe0, 0xb6, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb7, 0xa5, 0x72, 0x71, 0xab, 0xf5, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xf0, 0xa6, 0x73, 0x73, 
	0x9c, 0xe9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xbb, 
	0x74, 0x72, 0x91, 0xc6, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0x90, 0x7a, 0xc3, 0xfd, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfc, 0xc1, 0x7a, 0x77, 
	0xbb, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xca, 
	0x7d, 0x7c, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb0, 0xc3, 0xcc, 0xcc, 
	0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 
	0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc3, 0xaf, 0xaf, 
	0xc2, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 
	0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc4, 
	0xb0, 0xb2, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 0xb3, 
	
};

Vtx bullet_bill_000_displaylist_mesh_layer_1_vtx_0[54] = {
	{{{-100, 0, 347},0, {-89, 814},{0xCE, 0x0, 0x75, 0xFF}}},
	{{{-70, 71, 347},0, {-89, 284},{0xDD, 0x23, 0x75, 0xFF}}},
	{{{-138, 139, 272},0, {936, 136},{0xB8, 0x48, 0x4D, 0xFF}}},
	{{{-195, 0, 272},0, {936, 1165},{0x9B, 0x0, 0x4D, 0xFF}}},
	{{{-176, 177, 161},0, {2130, 113},{0xA6, 0x59, 0xD, 0xFF}}},
	{{{-249, 0, 161},0, {2130, 1427},{0x82, 0x0, 0xC, 0xFF}}},
	{{{71, 71, 347},0, {-62, 175},{0x23, 0x23, 0x75, 0xFF}}},
	{{{101, 0, 347},0, {-210, 689},{0x32, 0x0, 0x75, 0xFF}}},
	{{{139, 139, 272},0, {1000, 30},{0x48, 0x48, 0x4D, 0xFF}}},
	{{{196, 0, 272},0, {714, 1032},{0x65, 0x0, 0x4D, 0xFF}}},
	{{{250, 0, 161},0, {1837, 1284},{0x7E, 0x0, 0xC, 0xFF}}},
	{{{177, 177, 161},0, {2200, 8},{0x5A, 0x59, 0xD, 0xFF}}},
	{{{0, 101, 347},0, {-16, -16},{0x0, 0x32, 0x75, 0xFF}}},
	{{{71, 71, 347},0, {-16, -16},{0x23, 0x23, 0x75, 0xFF}}},
	{{{139, 139, 272},0, {-16, -16},{0x48, 0x48, 0x4D, 0xFF}}},
	{{{0, 196, 272},0, {-16, -16},{0x0, 0x65, 0x4D, 0xFF}}},
	{{{0, 196, 272},0, {-16, -16},{0x0, 0x65, 0x4D, 0xFF}}},
	{{{139, 139, 272},0, {-16, -16},{0x48, 0x48, 0x4D, 0xFF}}},
	{{{177, 177, 161},0, {-16, -16},{0x5A, 0x59, 0xD, 0xFF}}},
	{{{0, 250, 161},0, {-16, -16},{0x0, 0x7E, 0xE, 0xFF}}},
	{{{0, 198, -81},0, {-16, -16},{0x0, 0x7E, 0x10, 0xFF}}},
	{{{134, 140, -81},0, {-16, -16},{0x59, 0x59, 0x10, 0xFF}}},
	{{{250, 0, 161},0, {-16, -16},{0x7E, 0x0, 0xC, 0xFF}}},
	{{{0, 250, -192},0, {-16, -16},{0x0, 0x71, 0xC6, 0xFF}}},
	{{{-176, 177, -192},0, {-16, -16},{0xAF, 0x4F, 0xC7, 0xFF}}},
	{{{-249, 0, -192},0, {-16, -16},{0x8E, 0x0, 0xC8, 0xFF}}},
	{{{177, 177, -192},0, {-16, -16},{0x51, 0x4F, 0xC7, 0xFF}}},
	{{{250, 0, -192},0, {-16, -16},{0x72, 0x0, 0xC8, 0xFF}}},
	{{{189, 0, -81},0, {-16, -16},{0x7E, 0x0, 0x11, 0xFF}}},
	{{{134, 140, -81},0, {-16, -16},{0x59, 0x59, 0x10, 0xFF}}},
	{{{-70, 71, 347},0, {536, -464},{0xDD, 0x23, 0x75, 0xFF}}},
	{{{71, 71, 347},0, {1508, -464},{0x23, 0x23, 0x75, 0xFF}}},
	{{{0, 101, 347},0, {1024, -636},{0x0, 0x32, 0x75, 0xFF}}},
	{{{101, 0, 347},0, {1708, -16},{0x32, 0x0, 0x75, 0xFF}}},
	{{{1, 0, 347},0, {1025, -45},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-41, 0, 347},0, {739, -47},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-70, 0, 347},0, {536, -45},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-70, 0, 347},0, {536, -45},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-100, 0, 347},0, {336, -16},{0xCE, 0x0, 0x75, 0xFF}}},
	{{{-70, 71, 347},0, {-16, -16},{0xDD, 0x23, 0x75, 0xFF}}},
	{{{0, 101, 347},0, {-16, -16},{0x0, 0x32, 0x75, 0xFF}}},
	{{{0, 196, 272},0, {-16, -16},{0x0, 0x65, 0x4D, 0xFF}}},
	{{{-138, 139, 272},0, {-16, -16},{0xB8, 0x48, 0x4D, 0xFF}}},
	{{{0, 250, 161},0, {-16, -16},{0x0, 0x7E, 0xE, 0xFF}}},
	{{{-176, 177, 161},0, {-16, -16},{0xA6, 0x59, 0xD, 0xFF}}},
	{{{-133, 140, -81},0, {-16, -16},{0xA6, 0x59, 0x10, 0xFF}}},
	{{{0, 198, -81},0, {-16, -16},{0x0, 0x7E, 0x10, 0xFF}}},
	{{{-133, 140, -81},0, {-16, -16},{0xA6, 0x59, 0x10, 0xFF}}},
	{{{0, 250, 161},0, {-16, -16},{0x0, 0x7E, 0xE, 0xFF}}},
	{{{-176, 177, -192},0, {-16, -16},{0xAF, 0x4F, 0xC7, 0xFF}}},
	{{{-249, 0, -192},0, {-16, -16},{0x8E, 0x0, 0xC8, 0xFF}}},
	{{{-189, 0, -81},0, {-16, -16},{0x82, 0x0, 0x11, 0xFF}}},
	{{{-176, 177, 161},0, {-16, -16},{0xA6, 0x59, 0xD, 0xFF}}},
	{{{-249, 0, 161},0, {-16, -16},{0x82, 0x0, 0xC, 0xFF}}},
};

Gfx bullet_bill_000_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(bullet_bill_000_displaylist_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(bullet_bill_000_displaylist_mesh_layer_1_vtx_0 + 16, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 3, 2, 0),
	gsSP1Triangle(5, 4, 2, 0),
	gsSP1Triangle(5, 2, 6, 0),
	gsSP1Triangle(7, 4, 5, 0),
	gsSP1Triangle(8, 4, 7, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(9, 7, 10, 0),
	gsSP1Triangle(7, 5, 10, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(12, 13, 6, 0),
	gsSPVertex(bullet_bill_000_displaylist_mesh_layer_1_vtx_0 + 30, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(0, 6, 5, 0),
	gsSP1Triangle(0, 7, 6, 0),
	gsSP1Triangle(0, 8, 7, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(bullet_bill_000_displaylist_mesh_layer_1_vtx_0 + 46, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(4, 5, 1, 0),
	gsSP1Triangle(1, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSPEndDisplayList(),
};

Vtx bullet_bill_000_displaylist_mesh_layer_1_vtx_1[46] = {
	{{{-138, -138, 272},0, {-16, -16},{0xB8, 0xB8, 0x4D, 0xFF}}},
	{{{-195, 0, 272},0, {-16, -16},{0x9B, 0x0, 0x4D, 0xFF}}},
	{{{-249, 0, 161},0, {-16, -16},{0x82, 0x0, 0xC, 0xFF}}},
	{{{-176, -176, 161},0, {-16, -16},{0xA6, 0xA7, 0xD, 0xFF}}},
	{{{-133, -139, -81},0, {-16, -16},{0xA6, 0xA7, 0x10, 0xFF}}},
	{{{-189, 0, -81},0, {-16, -16},{0x82, 0x0, 0x11, 0xFF}}},
	{{{-176, -176, -192},0, {-16, -16},{0xAF, 0xB1, 0xC7, 0xFF}}},
	{{{-249, 0, -192},0, {-16, -16},{0x8E, 0x0, 0xC8, 0xFF}}},
	{{{250, 0, -192},0, {-16, -16},{0x72, 0x0, 0xC8, 0xFF}}},
	{{{177, -176, -192},0, {-16, -16},{0x51, 0xB1, 0xC7, 0xFF}}},
	{{{134, -139, -81},0, {-16, -16},{0x59, 0xA7, 0x10, 0xFF}}},
	{{{189, 0, -81},0, {-16, -16},{0x7E, 0x0, 0x11, 0xFF}}},
	{{{177, -176, 161},0, {-16, -16},{0x5A, 0xA7, 0xD, 0xFF}}},
	{{{0, -249, 161},0, {-16, -16},{0x0, 0x82, 0xE, 0xFF}}},
	{{{139, -138, 272},0, {-16, -16},{0x48, 0xB8, 0x4D, 0xFF}}},
	{{{250, 0, 161},0, {-16, -16},{0x7E, 0x0, 0xC, 0xFF}}},
	{{{189, 0, -81},0, {-16, -16},{0x7E, 0x0, 0x11, 0xFF}}},
	{{{250, 0, 161},0, {-16, -16},{0x7E, 0x0, 0xC, 0xFF}}},
	{{{177, -176, 161},0, {-16, -16},{0x5A, 0xA7, 0xD, 0xFF}}},
	{{{196, 0, 272},0, {-16, -16},{0x65, 0x0, 0x4D, 0xFF}}},
	{{{139, -138, 272},0, {-16, -16},{0x48, 0xB8, 0x4D, 0xFF}}},
	{{{0, -195, 272},0, {-16, -16},{0x0, 0x9B, 0x4D, 0xFF}}},
	{{{-138, -138, 272},0, {-16, -16},{0xB8, 0xB8, 0x4D, 0xFF}}},
	{{{-176, -176, 161},0, {-16, -16},{0xA6, 0xA7, 0xD, 0xFF}}},
	{{{0, -249, 161},0, {-16, -16},{0x0, 0x82, 0xE, 0xFF}}},
	{{{0, -197, -81},0, {-16, -16},{0x0, 0x82, 0x10, 0xFF}}},
	{{{134, -139, -81},0, {-16, -16},{0x59, 0xA7, 0x10, 0xFF}}},
	{{{177, -176, -192},0, {-16, -16},{0x51, 0xB1, 0xC7, 0xFF}}},
	{{{0, -249, -192},0, {-16, -16},{0x0, 0x8F, 0xC6, 0xFF}}},
	{{{-176, -176, -192},0, {-16, -16},{0xAF, 0xB1, 0xC7, 0xFF}}},
	{{{-133, -139, -81},0, {-16, -16},{0xA6, 0xA7, 0x10, 0xFF}}},
	{{{0, -197, -81},0, {-16, -16},{0x0, 0x82, 0x10, 0xFF}}},
	{{{101, 0, 347},0, {1708, -16},{0x32, 0x0, 0x75, 0xFF}}},
	{{{139, -138, 272},0, {1964, 760},{0x48, 0xB8, 0x4D, 0xFF}}},
	{{{196, 0, 272},0, {2356, -16},{0x65, 0x0, 0x4D, 0xFF}}},
	{{{71, -70, 347},0, {1508, 368},{0x23, 0xDD, 0x75, 0xFF}}},
	{{{1, 0, 347},0, {1025, -45},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -100, 347},0, {1024, 540},{0x0, 0xCE, 0x75, 0xFF}}},
	{{{-41, 0, 347},0, {739, -47},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-70, -70, 347},0, {536, 368},{0xDD, 0xDD, 0x75, 0xFF}}},
	{{{-70, 0, 347},0, {536, -45},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-100, 0, 347},0, {336, -16},{0xCE, 0x0, 0x75, 0xFF}}},
	{{{-70, 0, 347},0, {536, -45},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-195, 0, 272},0, {-308, -16},{0x9B, 0x0, 0x4D, 0xFF}}},
	{{{-138, -138, 272},0, {80, 760},{0xB8, 0xB8, 0x4D, 0xFF}}},
	{{{0, -195, 272},0, {1024, 1094},{0x0, 0x9B, 0x4D, 0xFF}}},
};

Gfx bullet_bill_000_displaylist_mesh_layer_1_tri_1[] = {
	gsSPVertex(bullet_bill_000_displaylist_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 3, 2, 0),
	gsSP1Triangle(5, 4, 2, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(8, 11, 10, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 12, 15, 0),
	gsSPVertex(bullet_bill_000_displaylist_mesh_layer_1_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(11, 9, 12, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(12, 15, 14, 0),
	gsSP1Triangle(14, 15, 7, 0),
	gsSP1Triangle(4, 5, 8, 0),
	gsSPVertex(bullet_bill_000_displaylist_mesh_layer_1_vtx_1 + 32, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(7, 9, 11, 0),
	gsSP1Triangle(7, 11, 12, 0),
	gsSP1Triangle(5, 7, 12, 0),
	gsSP1Triangle(5, 12, 13, 0),
	gsSP1Triangle(3, 5, 13, 0),
	gsSP1Triangle(3, 13, 1, 0),
	gsSPEndDisplayList(),
};


Gfx mat_bullet_bill_eyes_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bullet_bill_eye_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 31),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, bullet_bill_eye_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPSetLights1(bullet_bill_eyes_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_bullet_bill_eyes_f3d[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_bullet_bill_mouth_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, bullet_bill_teeth2_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPSetLights1(bullet_bill_mouth_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx bullet_bill_000_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_bullet_bill_eyes_f3d),
	gsSPDisplayList(bullet_bill_000_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_bullet_bill_eyes_f3d),
	gsSPDisplayList(mat_bullet_bill_mouth_f3d),
	gsSPDisplayList(bullet_bill_000_displaylist_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx bullet_bill_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
