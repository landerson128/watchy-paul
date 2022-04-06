// 'plus', 9x9px
const unsigned char epd_bitmap_plus [] PROGMEM = {
	0x1c, 0x00, 0x1c, 0x00, 0x1c, 0x00, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0x1c, 0x00, 0x1c, 0x00, 
	0x1c, 0x00
};
// 'minus', 9x9px
const unsigned char epd_bitmap_minus [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0xff, 0x80, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00
};
// 'set', 22x10px
const unsigned char epd_bitmap_set [] PROGMEM = {
	0x3e, 0xfd, 0xfc, 0x7e, 0xfd, 0xfc, 0x60, 0xc0, 0x60, 0x70, 0xc0, 0x60, 0x38, 0xf8, 0x60, 0x1c, 
	0xf8, 0x60, 0x0e, 0xc0, 0x60, 0x06, 0xc0, 0x60, 0xfe, 0xfc, 0x60, 0xfc, 0xfc, 0x60
};
// 'stop_n90', 10x30px
const unsigned char epd_bitmap_stop_n90 [] PROGMEM = {
	0xc0, 0x00, 0xc3, 0x80, 0xc7, 0xc0, 0xce, 0xc0, 0xdc, 0xc0, 0xf8, 0xc0, 0x70, 0xc0, 0x00, 0x00, 
	0x00, 0xc0, 0x00, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x7f, 0x80, 
	0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xc0, 0x7f, 0x80, 0x00, 0x00, 0xff, 0xc0, 
	0xff, 0xc0, 0x18, 0xc0, 0x18, 0xc0, 0x1c, 0xc0, 0x0f, 0xc0, 0x07, 0x80
};
// 'stop_90', 10x30px
const unsigned char epd_bitmap_stop_90 [] PROGMEM = {
	0x78, 0x00, 0xfc, 0x00, 0xce, 0x00, 0xc6, 0x00, 0xc6, 0x00, 0xff, 0xc0, 0xff, 0xc0, 0x00, 0x00, 
	0x7f, 0x80, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xc0, 0x7f, 0x80, 0x00, 0x00, 
	0xc0, 0x00, 0xc0, 0x00, 0xff, 0xc0, 0xff, 0xc0, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc3, 0x80, 
	0xc7, 0xc0, 0xce, 0xc0, 0xdc, 0xc0, 0xf8, 0xc0, 0x70, 0xc0, 0x00, 0xc0
};
// 'stop', 30x10px
const unsigned char epd_bitmap_stop [] PROGMEM = {
	0x3e, 0xfc, 0xf9, 0xf8, 0x7e, 0xfd, 0xfd, 0xfc, 0x60, 0x31, 0x8d, 0x8c, 0x70, 0x31, 0x8d, 0x8c, 
	0x38, 0x31, 0x8d, 0x9c, 0x1c, 0x31, 0x8d, 0xf8, 0x0e, 0x31, 0x8d, 0xf0, 0x06, 0x31, 0x8d, 0x80, 
	0xfe, 0x31, 0xfd, 0x80, 0xfc, 0x30, 0xf9, 0x80
};
// 'start_n90', 10x37px
const unsigned char epd_bitmap_start_n90 [] PROGMEM = {
	0xc0, 0x00, 0xc3, 0x80, 0xc7, 0xc0, 0xce, 0xc0, 0xdc, 0xc0, 0xf8, 0xc0, 0x70, 0xc0, 0x00, 0x00, 
	0x00, 0xc0, 0x00, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0xff, 0x00, 
	0xff, 0x80, 0x31, 0xc0, 0x31, 0xc0, 0xff, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0xc0, 0xff, 0xc0, 
	0x18, 0xc0, 0x38, 0xc0, 0x7c, 0xc0, 0xef, 0xc0, 0xc7, 0x80, 0x80, 0x00, 0x00, 0xc0, 0x00, 0xc0, 
	0xff, 0xc0, 0xff, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0
};
// 'start_90', 10x37px
const unsigned char epd_bitmap_start_90 [] PROGMEM = {
	0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xff, 0xc0, 0xff, 0xc0, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x40, 
	0x78, 0xc0, 0xfd, 0xc0, 0xcf, 0x80, 0xc7, 0x00, 0xc6, 0x00, 0xff, 0xc0, 0xff, 0xc0, 0x00, 0x00, 
	0x3f, 0xc0, 0x7f, 0xc0, 0xe3, 0x00, 0xe3, 0x00, 0x7f, 0xc0, 0x3f, 0xc0, 0x00, 0x00, 0xc0, 0x00, 
	0xc0, 0x00, 0xff, 0xc0, 0xff, 0xc0, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc3, 0x80, 0xc7, 0xc0, 
	0xce, 0xc0, 0xdc, 0xc0, 0xf8, 0xc0, 0x70, 0xc0, 0x00, 0xc0
};
// 'start', 37x10px
const unsigned char epd_bitmap_start [] PROGMEM = {
	0x3e, 0xfc, 0x63, 0xf3, 0xf8, 0x7e, 0xfc, 0xf3, 0xfb, 0xf8, 0x60, 0x31, 0xfb, 0x18, 0xc0, 0x70, 
	0x31, 0x9b, 0x18, 0xc0, 0x38, 0x31, 0x9b, 0x38, 0xc0, 0x1c, 0x31, 0x9b, 0xf0, 0xc0, 0x0e, 0x31, 
	0xfb, 0xe0, 0xc0, 0x06, 0x31, 0xfb, 0x70, 0xc0, 0xfe, 0x31, 0x9b, 0x38, 0xc0, 0xfc, 0x31, 0x9b, 
	0x1c, 0xc0
};
// 'done_90', 10x32px
const unsigned char epd_bitmap_done_90 [] PROGMEM = {
	0xc0, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0x00, 0x00, 0xff, 0xc0, 
	0xff, 0x80, 0x07, 0x00, 0x0e, 0x00, 0x1c, 0x00, 0x38, 0x00, 0x7f, 0xc0, 0xff, 0xc0, 0x00, 0x00, 
	0x7f, 0x80, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xc0, 0x7f, 0x80, 0x00, 0x00, 
	0x7f, 0x80, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0
};
// 'done', 32x10px
const unsigned char epd_bitmap_done [] PROGMEM = {
	0xfe, 0x3e, 0x41, 0xbf, 0xff, 0x7f, 0x61, 0xbf, 0x33, 0x63, 0x71, 0xb0, 0x33, 0x63, 0x79, 0xb0, 
	0x33, 0x63, 0x7d, 0xbe, 0x33, 0x63, 0x6f, 0xbe, 0x33, 0x63, 0x67, 0xb0, 0x33, 0x63, 0x63, 0xb0, 
	0xff, 0x7f, 0x61, 0xbf, 0xfe, 0x3e, 0x60, 0xbf
};
// 'set_90', 10x22px
const unsigned char epd_bitmap_set_90 [] PROGMEM = {
	0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xff, 0xc0, 0xff, 0xc0, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x00, 
	0xc0, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0x00, 0x00, 0xc3, 0x80, 
	0xc7, 0xc0, 0xce, 0xc0, 0xdc, 0xc0, 0xf8, 0xc0, 0x70, 0xc0, 0x00, 0xc0
};

// 'play', 7x13px
const unsigned char epd_bitmap_play [] PROGMEM = {
	0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xfc, 0xf8, 0xf0, 0xe0, 0xc0, 0x80
};
// 'pause', 12x13px
const unsigned char epd_bitmap_pause [] PROGMEM = {
	0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
	0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0
};
// 'right_arrow', 8x13px
const unsigned char epd_bitmap_right_arrow [] PROGMEM = {
	0x40, 0xe0, 0x70, 0x38, 0x1c, 0x0e, 0x07, 0x0e, 0x1c, 0x38, 0x70, 0xe0, 0x40
};
// 'left_arrow', 8x13px
const unsigned char epd_bitmap_left_arrow [] PROGMEM = {
	0x02, 0x07, 0x0e, 0x1c, 0x38, 0x70, 0xe0, 0x70, 0x38, 0x1c, 0x0e, 0x07, 0x02
};
// 'up_arrow', 13x8px
const unsigned char epd_bitmap_up_arrow [] PROGMEM = {
	0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0xe0, 0x38, 0x40, 0x10
};
// 'down_arrow', 13x8px
const unsigned char epd_bitmap_down_arrow [] PROGMEM = {
	0x40, 0x10, 0xe0, 0x38, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00
};

// 'bell', 16x19px
const unsigned char epd_bitmap_bell [] PROGMEM = {
	0x01, 0x80, 0x01, 0x80, 0x07, 0xe0, 0x0f, 0xf0, 0x1f, 0xf8, 0x1f, 0xf8, 0x3f, 0xfc, 0x3f, 0xfc, 
	0x3f, 0xfc, 0x3f, 0xfc, 0x3f, 0xfc, 0x7f, 0xfe, 0x7f, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
	0x07, 0xe0, 0x03, 0xc0, 0x01, 0x80
};

// 'curved_up_arrow', 5x16px
const unsigned char epd_bitmap_curved_up_arrow [] PROGMEM = {
	0xf0, 0xc0, 0xa0, 0x90, 0x10, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x10, 0x10, 0x20, 0x40, 0x80
};
// 'hourglass_arrow', 20x20px
const unsigned char epd_bitmap_hourglass_arrow [] PROGMEM = {
	0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xc0, 0x19, 0xe0, 0xc0, 0x19, 0x80, 0xc0, 0x19, 0x40, 0xc0, 
	0x19, 0x20, 0x60, 0x30, 0x20, 0x30, 0x60, 0x10, 0x18, 0xc0, 0x10, 0x0d, 0x80, 0x10, 0x0d, 0x80, 
	0x10, 0x18, 0xc0, 0x10, 0x30, 0x60, 0x10, 0x62, 0x30, 0x20, 0xc7, 0x18, 0x20, 0xcf, 0x98, 0x40, 
	0xdf, 0xd8, 0x80, 0xc0, 0x19, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00
};
// 'hourglass', 13x20px
const unsigned char epd_bitmap_hourglass [] PROGMEM = {
	0xff, 0xf8, 0xff, 0xf8, 0xc0, 0x18, 0xc0, 0x18, 0xc0, 0x18, 0xc0, 0x18, 0x60, 0x30, 0x30, 0x60, 
	0x18, 0xc0, 0x0d, 0x80, 0x0d, 0x80, 0x18, 0xc0, 0x30, 0x60, 0x62, 0x30, 0xc7, 0x18, 0xcf, 0x98, 
	0xdf, 0xd8, 0xc0, 0x18, 0xff, 0xf8, 0xff, 0xf8
};

// 'reset_n90', 10x37px
const unsigned char epd_bitmap_reset_n90 [] PROGMEM = {
	0xff, 0xc0, 0xff, 0xc0, 0x18, 0xc0, 0x38, 0xc0, 0x7c, 0xc0, 0xef, 0xc0, 0xc7, 0x80, 0x80, 0x00, 
	0x00, 0x00, 0xff, 0xc0, 0xff, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 
	0xc3, 0x80, 0xc7, 0xc0, 0xce, 0xc0, 0xdc, 0xc0, 0xf8, 0xc0, 0x70, 0xc0, 0x00, 0x00, 0xff, 0xc0, 
	0xff, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0xc0, 
	0xff, 0xc0, 0xff, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0
};

// 'uturn-arrow', 20x20px
const unsigned char epd_bitmap_uturn_arrow [] PROGMEM = {
	0x03, 0xff, 0xe0, 0x07, 0xff, 0xf0, 0x07, 0xff, 0xf0, 0x07, 0x00, 0x70, 0x07, 0x00, 0x70, 0x07, 
	0x00, 0x70, 0x07, 0x00, 0x70, 0x07, 0x00, 0x70, 0x07, 0x00, 0x70, 0x07, 0x00, 0x70, 0x07, 0x00, 
	0x70, 0x07, 0x00, 0x70, 0xc7, 0x18, 0x70, 0xe7, 0x38, 0x70, 0xf7, 0x78, 0x70, 0x7f, 0xf0, 0x70, 
	0x3f, 0xe0, 0x70, 0x1f, 0xc0, 0x70, 0x0f, 0x80, 0x70, 0x07, 0x00, 0x70
};

// 'toggle_n90', 10x45px
const unsigned char epd_bitmap_toggle_n90 [] PROGMEM = {
	0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x00, 
	0x7f, 0x80, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xc0, 0x7f, 0x80, 0x00, 0x00, 
	0x7f, 0x80, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xcc, 0xc0, 0xfc, 0xc0, 0x7c, 0xc0, 0x00, 0x00, 
	0x7f, 0x80, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xcc, 0xc0, 0xfc, 0xc0, 0x7c, 0xc0, 0x00, 0x00, 
	0xff, 0xc0, 0xff, 0xc0, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xff, 0xc0, 
	0xff, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xcc, 0xc0, 0xc0, 0xc0
};

// 'on', 26x14px
const unsigned char epd_bitmap_on [] PROGMEM = {
	0x3f, 0xff, 0xff, 0x00, 0x7f, 0xff, 0xff, 0x80, 0xfc, 0x1b, 0xe7, 0xc0, 0xf8, 0x09, 0xe7, 0xc0, 
	0xf9, 0xc8, 0xe7, 0xc0, 0xf9, 0xc8, 0x67, 0xc0, 0xf9, 0xc8, 0x27, 0xc0, 0xf9, 0xc9, 0x07, 0xc0, 
	0xf9, 0xc9, 0x87, 0xc0, 0xf9, 0xc9, 0xc7, 0xc0, 0xf8, 0x09, 0xe7, 0xc0, 0xfc, 0x19, 0xf7, 0xc0, 
	0x7f, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff, 0x00
};
// 'off', 26x14px
const unsigned char epd_bitmap_off [] PROGMEM = {
	0x3f, 0xff, 0xff, 0x00, 0x7f, 0xff, 0xff, 0x80, 0xe0, 0xc0, 0x80, 0xc0, 0xc0, 0x40, 0x80, 0xc0, 
	0xce, 0x4f, 0x9f, 0xc0, 0xce, 0x4f, 0x9f, 0xc0, 0xce, 0x41, 0x83, 0xc0, 0xce, 0x41, 0x83, 0xc0, 
	0xce, 0x4f, 0x9f, 0xc0, 0xce, 0x4f, 0x9f, 0xc0, 0xc0, 0x4f, 0x9f, 0xc0, 0xe0, 0xcf, 0x9f, 0xc0, 
	0x7f, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff, 0x00
};
// 'repeat_arrow', 25x26px
const unsigned char epd_bitmap_repeat_arrow [] PROGMEM = {
	0x00, 0x03, 0x80, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0xf0, 0x00, 
	0x00, 0x00, 0x78, 0x00, 0x07, 0xff, 0xfc, 0x00, 0x1f, 0xff, 0xfc, 0x00, 0x3f, 0xff, 0xfc, 0x00, 
	0x7c, 0x00, 0x78, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xe0, 0x01, 0xe0, 0x00, 0xc0, 0x03, 0xc0, 0x00, 
	0xc0, 0x03, 0x80, 0x00, 0x00, 0xe0, 0x01, 0x80, 0x01, 0xe0, 0x01, 0x80, 0x03, 0xc0, 0x03, 0x80, 
	0x07, 0x80, 0x07, 0x80, 0x0f, 0x00, 0x1f, 0x00, 0x1f, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xfc, 0x00, 
	0x1f, 0xff, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 
	0x01, 0xe0, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00
};
// 'end_arrow', 32x19px
const unsigned char epd_bitmap_end_arrow [] PROGMEM = {
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0xf0, 0x07, 0x00, 0x00, 0xf8, 0x07, 
	0x00, 0x00, 0x7c, 0x07, 0x00, 0x00, 0x3e, 0x07, 0x00, 0x00, 0x1f, 0x07, 0x00, 0x00, 0x0f, 0x87, 
	0xff, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xc7, 0x00, 0x00, 0x0f, 0x87, 
	0x00, 0x00, 0x1f, 0x07, 0x00, 0x00, 0x3e, 0x07, 0x00, 0x00, 0x7c, 0x07, 0x00, 0x00, 0xf8, 0x07, 
	0x00, 0x00, 0xf0, 0x07, 0x00, 0x00, 0xe0, 0x07, 0x00, 0x00, 0x00, 0x07
};