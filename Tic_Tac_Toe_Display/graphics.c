#include <avr/pgmspace.h>

// 'o', 80x80px
const unsigned char oChar[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 
    0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 
    0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xe0, 0x00, 
    0x00, 0x0f, 0xff, 0xfe, 0x00, 0x00, 0x3f, 0xff, 0xf0, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 
    0x0f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x7f, 
    0xff, 0xc0, 0x00, 0x00, 0x01, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 
    0xfe, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x00, 0xff, 0xfc, 0x00, 
    0x00, 0x00, 0x00, 0x3f, 0xff, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x00, 
    0x01, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x03, 0xff, 0xf0, 0x00, 0x00, 0x00, 
    0x00, 0x07, 0xff, 0x80, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xc0, 0x03, 0xff, 
    0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x07, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 
    0xff, 0xe0, 0x07, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xe0, 0x07, 0xff, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 
    0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xff, 0xf0, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x0f, 0xfe, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x7f, 0xf0, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x1f, 0xfe, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 
    0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x7f, 0xf8, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x1f, 0xfe, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x0f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x7f, 0xf0, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x0f, 0xff, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 
    0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x07, 0xff, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0xff, 0xe0, 0x07, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xe0, 0x07, 0xff, 
    0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 
    0xff, 0xc0, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xc0, 0x01, 0xff, 0xe0, 0x00, 
    0x00, 0x00, 0x00, 0x07, 0xff, 0x80, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x80, 
    0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x00, 
    0x00, 0x3f, 0xff, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x00, 0x7f, 
    0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 
    0xfe, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x1f, 0xff, 0xf0, 
    0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x0f, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0xf0, 0x00, 
    0x00, 0x07, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xc0, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfe, 
    0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 
    0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 
    0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x01, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'x', 80x80px
const unsigned char xChar[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x1f, 0xf0, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x1f, 0xfe, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x1f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 
    0x1f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf8, 0x1f, 0xff, 0xc0, 0x00, 0x00, 0x00, 
    0x00, 0x03, 0xff, 0xf8, 0x1f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf8, 0x0f, 0xff, 
    0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf0, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 
    0xff, 0xf0, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x03, 0xff, 0xfe, 0x00, 
    0x00, 0x00, 0x00, 0x7f, 0xff, 0xc0, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 
    0x00, 0xff, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xff, 0xc0, 0x00, 0x00, 
    0x03, 0xff, 0xfe, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x1f, 
    0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 
    0xf0, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x03, 0xff, 0xfe, 
    0x00, 0x00, 0x7f, 0xff, 0xc0, 0x00, 0x00, 0x01, 0xff, 0xfe, 0x00, 0x00, 0xff, 0xff, 0x80, 0x00, 
    0x00, 0x00, 0xff, 0xff, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xc0, 0x03, 
    0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 
    0x1f, 0xff, 0xf0, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x1f, 0xff, 0xf0, 
    0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 
    0xfe, 0x7f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfe, 0xff, 0xff, 0x80, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 
    0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x1f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
    0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 
    0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xf8, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
    0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xfe, 0x7f, 
    0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
    0x0f, 0xff, 0xf8, 0x1f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x0f, 0xff, 0xf8, 
    0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 
    0xc0, 0x03, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x01, 0xff, 0xfe, 0x00, 0x00, 
    0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x00, 
    0x7f, 0xff, 0xc0, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x0f, 
    0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 
    0xf8, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x7f, 0xff, 0xc0, 
    0x00, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x00, 0xff, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0xfe, 0x00, 
    0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x00, 0x00, 
    0x00, 0x7f, 0xff, 0xc0, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x0f, 0xff, 
    0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xe0, 0x0f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 
    0xff, 0xf0, 0x1f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf0, 0x1f, 0xff, 0xc0, 0x00, 
    0x00, 0x00, 0x00, 0x03, 0xff, 0xf8, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf8, 
    0x1f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x7f, 0xf8, 0x1f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x0f, 0xf8, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};