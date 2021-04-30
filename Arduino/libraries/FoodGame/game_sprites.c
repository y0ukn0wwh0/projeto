#include <avr/pgmspace.h>

#ifndef GAME_SPRITES
#define GAME_SPRITES

const uint8_t mandrake[] PROGMEM = {
0x40, 0x80, 0x40, 0x08, 0xc4, 0x66, 0xb2, 0x5c, 0xb2, 0xe2, 0x46, 0xcc, 0x88, 0x40, 0x40, 0x00,
0x00, 0x38, 0x05, 0x1f, 0x01, 0x28, 0x1c, 0x27, 0x03, 0x8f, 0x78, 0x90, 0x03, 0x11, 0x0e, 0x30,
};

const uint8_t apple[] PROGMEM = {
0x18, 0x3c, 0x7d, 0x3b, 0x74, 0x3c, 0x18, 0x00
};

#endif