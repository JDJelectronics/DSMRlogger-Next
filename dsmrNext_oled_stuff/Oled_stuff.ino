/*
***************************************************************************  
**  Program  : oled_Stuff (part of JDJ-KOGA_TT.ino)
**  Copyright (c) 2021 Jelmer de Jong 
**
**  TERMS OF USE: MIT License. See bottom of file.                                                            
***************************************************************************      
*/

//---JDJ Trex--- 60 by 35 pixels
const unsigned char trex[] U8X8_PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0xe0, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xfe,
0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xfe, 0x03, 0x00, 0x00, 0x00,
0x00, 0x00, 0xe0, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff,
0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x03, 0x00, 0x00, 0x00,
0x00, 0x00, 0xe0, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x0f,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xf0, 0x03,
0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xfc, 0x03, 0x00, 0x00, 0x00, 0x00,
0x80, 0x00, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x80, 0x83, 0xff, 0x1f,
0x00, 0x00, 0x00, 0x00, 0x80, 0xc7, 0xff, 0x13, 0x00, 0x00, 0x00, 0x00,
0x80, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x03,
0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00,
0x00, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x01,
0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0xf8, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xf1, 0x3f, 0xfe,
0xff, 0xff, 0xff, 0x0f, 0x00, 0xc0, 0x37, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0xc0, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc3, 0x20, 0x08,
0x00, 0x0f, 0x00, 0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x03,
0x3c, 0x40, 0x20, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x60, 0x00,
0x00, 0x00, 0x00, 0x00 };



//60 by 35 pixels
const unsigned char trex_cactus[] U8X8_PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x80, 0x0f, 0x00, 0x00, 0x00, 0x80, 0xff, 0x01, 0x80, 0x0f, 0x00,
0x00, 0x00, 0xe0, 0xff, 0x03, 0x80, 0x0f, 0x00, 0x00, 0x00, 0x60, 0xfe,
0x03, 0x80, 0x0f, 0x00, 0x00, 0x00, 0x60, 0xfe, 0x03, 0x80, 0x0f, 0x00,
0x00, 0x00, 0xe0, 0xff, 0x03, 0x98, 0x0f, 0x00, 0x00, 0x00, 0xe0, 0xff,
0x03, 0x9c, 0x0f, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x03, 0x9c, 0xcf, 0x00,
0x00, 0x00, 0xe0, 0xff, 0x03, 0x9c, 0xcf, 0x01, 0x00, 0x00, 0xe0, 0x0f,
0x00, 0x9c, 0xcf, 0x01, 0x00, 0x00, 0xe0, 0xff, 0x00, 0x9c, 0xcf, 0x01,
0x00, 0x00, 0xe0, 0x03, 0x00, 0x9c, 0xcf, 0x01, 0x80, 0x00, 0xf0, 0x03,
0x00, 0x9c, 0xcf, 0x01, 0x80, 0x00, 0xfc, 0x03, 0x00, 0x9c, 0xff, 0x00,
0x80, 0x00, 0xff, 0x1f, 0x00, 0x9c, 0x7f, 0x00, 0x80, 0x83, 0xff, 0x1f,
0x00, 0x9c, 0x0f, 0x00, 0x80, 0xc7, 0xff, 0x13, 0x00, 0x98, 0x0f, 0x00,
0x80, 0xff, 0xff, 0x03, 0x00, 0xf8, 0x0f, 0x00, 0x80, 0xff, 0xff, 0x03,
0x00, 0xf0, 0x0f, 0x00, 0x80, 0xff, 0xff, 0x03, 0x00, 0x80, 0x0f, 0x00,
0x00, 0xff, 0xff, 0x01, 0x00, 0x80, 0x0f, 0x00, 0x00, 0xfe, 0xff, 0x01,
0x00, 0x80, 0x0f, 0x00, 0x00, 0xfc, 0xff, 0x00, 0x00, 0x80, 0x0f, 0x00,
0x00, 0xf8, 0x7f, 0x00, 0x00, 0x80, 0x0f, 0x00, 0xfc, 0xf1, 0x3f, 0xfe,
0xff, 0x9f, 0xcf, 0x0f, 0x00, 0xc0, 0x37, 0x00, 0x00, 0x80, 0x0f, 0x00,
0x00, 0xc0, 0x33, 0x00, 0x00, 0x80, 0x0f, 0x00, 0x80, 0xc3, 0x20, 0x08,
0x00, 0x8f, 0x0f, 0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x03,
0x3c, 0x40, 0x20, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x60, 0x00,
0x00, 0x00, 0x00, 0x00 };


//60 by 35 pixels
const unsigned char trex_scared[] U8X8_PROGMEM = {
0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x0a, 0x02, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x08, 0x00, 0x00, 0x00,
0x00, 0x80, 0x0f, 0x00, 0xc0, 0x01, 0x80, 0xff, 0x01, 0x80, 0x0f, 0x00,
0xe0, 0x03, 0xe0, 0xff, 0x03, 0x80, 0x0f, 0x00, 0xe0, 0x03, 0x60, 0xfc,
0x03, 0x80, 0x0f, 0x00, 0xe2, 0x03, 0x60, 0xfd, 0x03, 0x80, 0x0f, 0x00,
0xc0, 0x01, 0x60, 0xfc, 0x03, 0x98, 0x0f, 0x00, 0x00, 0x00, 0xe0, 0xff,
0x03, 0x9c, 0x0f, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x03, 0x9c, 0xcf, 0x00,
0x00, 0x00, 0xe0, 0xff, 0x03, 0x9c, 0xcf, 0x01, 0x00, 0x00, 0xe0, 0x7f,
0x00, 0x9c, 0xcf, 0x01, 0x00, 0x00, 0xe0, 0xff, 0x00, 0x9c, 0xcf, 0x01,
0x00, 0x00, 0xe0, 0x03, 0x00, 0x9c, 0xcf, 0x01, 0x80, 0x00, 0xf0, 0x03,
0x00, 0x9c, 0xcf, 0x01, 0x80, 0x00, 0xfc, 0x03, 0x00, 0x9c, 0xff, 0x00,
0x80, 0x00, 0xff, 0x1f, 0x00, 0x9c, 0x7f, 0x00, 0x80, 0x83, 0xff, 0x1f,
0x00, 0x9c, 0x0f, 0x00, 0x80, 0xc7, 0xff, 0x13, 0x00, 0x98, 0x0f, 0x00,
0x80, 0xff, 0xff, 0x03, 0x00, 0xf8, 0x0f, 0x00, 0x80, 0xff, 0xff, 0x03,
0x00, 0xf0, 0x0f, 0x00, 0x80, 0xff, 0xff, 0x03, 0x00, 0x80, 0x0f, 0x00,
0x00, 0xff, 0xff, 0x01, 0x00, 0x80, 0x0f, 0x00, 0x00, 0xfe, 0xff, 0x01,
0x00, 0x80, 0x0f, 0x00, 0x00, 0xfc, 0xff, 0x00, 0x00, 0x80, 0x0f, 0x00,
0x00, 0xf8, 0x7f, 0x00, 0x00, 0x80, 0x0f, 0x00, 0xfc, 0xf1, 0x3f, 0xfe,
0xff, 0x9f, 0xcf, 0x0f, 0x00, 0xc0, 0x37, 0x00, 0x00, 0x80, 0x0f, 0x00,
0x00, 0xc0, 0x33, 0x00, 0x00, 0x80, 0x0f, 0x00, 0x80, 0xc3, 0x20, 0x08,
0x00, 0x8f, 0x0f, 0x00, 0x00, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x03,
0x3c, 0x40, 0x20, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x60, 0x00,
0x00, 0x00, 0x00, 0x00 };

//60 by 35 pixels
const unsigned char trex_gameover[] U8X8_PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xf8, 0x10, 0x22, 0x0f, 0x1c, 0x91, 0xe7, 0x01, 0x08, 0x28, 0x36, 0x01,
0x22, 0x91, 0x20, 0x02, 0x0c, 0x44, 0x2a, 0x01, 0x22, 0x91, 0x20, 0x02,
0xc4, 0x44, 0x22, 0x03, 0x22, 0x91, 0xe1, 0x01, 0x8c, 0x7c, 0x22, 0x01,
0x22, 0x9b, 0x20, 0x03, 0x98, 0x44, 0x22, 0x01, 0x22, 0x8e, 0x20, 0x02,
0xf0, 0x44, 0x22, 0x0f, 0x1c, 0x84, 0x27, 0x02, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x07, 0x00,
0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
0x80, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x18, 0x04, 0x00,
0x00, 0x00, 0x00, 0x00, 0x80, 0x38, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
0x80, 0x78, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x80, 0x38, 0x04, 0x00,
0x00, 0x80, 0x07, 0x00, 0x80, 0x18, 0x04, 0x00, 0x00, 0xa0, 0x27, 0x00,
0x80, 0x08, 0x04, 0x00, 0x00, 0xe0, 0x27, 0x00, 0x80, 0x00, 0x04, 0x00,
0x00, 0x80, 0x27, 0x00, 0x80, 0xff, 0x07, 0x00, 0x00, 0x80, 0x3f, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0xfc, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x60, 0x00, 0x00, 0x80, 0x07, 0x00,
0x00, 0x00, 0x20, 0x36, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0x98, 0x0f,
0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x38, 0x2b, 0x00, 0x00, 0x00, 0x03,
0x3c, 0x00, 0x88, 0x2f, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x0f,
0x00, 0x00, 0x00, 0x00 };
   

//---JDJ chip logo--- 64 by 64 pixels
const unsigned char JDJ_Chip[] U8X8_PROGMEM = {
0xff, 0xff, 0xe3, 0xe3, 0xc7, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xe3,
0xc7, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xe3, 0xc7, 0xc7, 0xff, 0xff,
0xff, 0xff, 0xe3, 0xe3, 0xc7, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xe3,
0xc7, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xe3, 0xc7, 0xc7, 0xff, 0xff,
0xff, 0xff, 0xe3, 0xe3, 0xc7, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x3f, 0x00, 0x00,
0x00, 0x00, 0xfe, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff,
0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0x07, 0x00, 0x00,
0x00, 0x00, 0xe0, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff,
0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0x01, 0x00, 0x00,
0x00, 0x00, 0xc7, 0xff, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x83, 0x01,
0x80, 0x01, 0x00, 0x00, 0x00, 0x80, 0x83, 0x01, 0x80, 0x01, 0x00, 0x00,
0x00, 0x80, 0x83, 0x01, 0xff, 0x01, 0x00, 0x00, 0x00, 0x80, 0x83, 0xff,
0xff, 0x01, 0x00, 0x00, 0x00, 0x80, 0x81, 0xff, 0xff, 0x01, 0x00, 0x00,
0x00, 0x80, 0x80, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff,
0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x01, 0x00, 0x00,
0x00, 0x00, 0x80, 0xff, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01,
0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x80, 0x01, 0xc0, 0xf8,
0x07, 0x18, 0x80, 0x01, 0xff, 0x01, 0xc0, 0xfc, 0x07, 0x18, 0x80, 0xff,
0xff, 0x01, 0xc0, 0x0c, 0x06, 0x18, 0x80, 0xff, 0xff, 0x01, 0x60, 0x0c,
0x06, 0x0c, 0x80, 0xff, 0xff, 0x01, 0x60, 0x06, 0x03, 0x0c, 0x80, 0xff,
0xff, 0x01, 0x60, 0x06, 0x03, 0x0c, 0x80, 0xff, 0xff, 0x01, 0x30, 0x86,
0x03, 0x06, 0x80, 0xff, 0x80, 0xc1, 0x3f, 0xff, 0xfd, 0x07, 0x80, 0x01,
0x80, 0xe1, 0x1f, 0xff, 0xfd, 0x03, 0x80, 0x01, 0x80, 0x01, 0x00, 0x00,
0x00, 0x00, 0x80, 0x01, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff,
0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x01, 0x07, 0x00,
0x00, 0x00, 0x80, 0xff, 0xff, 0x01, 0x03, 0x00, 0x00, 0x00, 0x80, 0xff,
0xff, 0x81, 0x01, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x81, 0x03, 0x00,
0x00, 0x00, 0x80, 0xff, 0x80, 0x81, 0x01, 0x00, 0x00, 0x00, 0x80, 0x01,
0x80, 0x81, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x80, 0x01, 0x00, 0x00,
0x00, 0x00, 0x80, 0x01, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff,
0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0x03, 0x00, 0x00,
0x00, 0x00, 0xe0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff,
0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0x1f, 0x00, 0x00,
0x00, 0x00, 0xf8, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff,
0xff, 0xff, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xe3, 0xe3, 0xc7, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xe3,
0xc7, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xe3, 0xc7, 0x8f, 0xff, 0xff,
0xff, 0xff, 0xe3, 0xe3, 0xc7, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xe3,
0xc7, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xe3, 0xc7, 0x8f, 0xff, 0xff,
0xff, 0xff, 0xe3, 0xe3, 0xc7, 0x8f, 0xff, 0xff };


//---Telegram logo--- 100 by 67 pixels
const unsigned char Telegram_Logo[] U8X8_PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x40, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xee, 0x1f, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xef, 0xff, 0x7e, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xfd, 0xdf, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xfd,
0xfb, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xdf,
0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe,
0xff, 0x7f, 0xef, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0x7f, 0xfb, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x80, 0xff, 0xfd, 0xef, 0xbd, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x7b, 0x3b, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0xe3, 0x3f, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x77, 0xe0, 0x7f, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x1f, 0xf0, 0x7b, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x07, 0xe0, 0x7f,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x7f, 0x00, 0xf0,
0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x5f, 0x00,
0xb0, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x07,
0x30, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff,
0x01, 0x18, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0,
0x7f, 0x00, 0x0e, 0xf0, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xf0, 0x0f, 0x00, 0x07, 0xf0, 0xfb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0xf0, 0x0f, 0xc0, 0x03, 0xf8, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xf8, 0x1f, 0xe0, 0x01, 0xf8, 0xff, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xf0, 0x7f, 0xf8, 0x00, 0xf8, 0xff, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x7f, 0x00, 0xf8, 0xff, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x3f, 0x00, 0xf8, 0x7f, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0x7f, 0x00, 0xf8, 0x7f,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x01, 0xfc,
0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0x03,
0xfc, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff,
0x07, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff,
0xff, 0x1f, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0,
0xff, 0xff, 0x7f, 0xfe, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xc0, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x01, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0x7f, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0x7f,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff,
0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff,
0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xf8, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x80, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

//---Telegram Icon--- 35 by 35 pixels
const unsigned char Telegram_icon[] U8X8_PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x04, 0x00, 0x00, 0x00, 0x80, 0x0f, 0x00, 0x00, 0x00, 0xf0, 0x06, 0x00,
0x00, 0x00, 0x7c, 0x07, 0x00, 0x00, 0x00, 0x9f, 0x07, 0x00, 0x00, 0xe0,
0xcf, 0x07, 0x00, 0x00, 0xfc, 0xe3, 0x03, 0x00, 0x00, 0xff, 0xf1, 0x07,
0x00, 0xc0, 0x7f, 0xfc, 0x03, 0x00, 0x00, 0x3f, 0xfc, 0x03, 0x00, 0x00,
0x08, 0xff, 0x03, 0x00, 0x00, 0x90, 0xff, 0x01, 0x00, 0x00, 0x90, 0xff,
0x01, 0x00, 0x00, 0xc0, 0xff, 0x01, 0x00, 0x00, 0xc0, 0xff, 0x01, 0x00,
0x00, 0xe0, 0xf8, 0x00, 0x00, 0x00, 0x40, 0xe0, 0x00, 0x00, 0x00, 0x00,
0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

//=============================================================================
//---Bluethoot icon--- 13 by 13 pixels
const unsigned char BT[] U8X8_PROGMEM = {
0x30, 0x00, 0x50, 0x00, 0x90, 0x00, 0x11, 0x01, 0x92, 0x00, 0x54, 0x00,
0x38, 0x00, 0x54, 0x00, 0x92, 0x00, 0x11, 0x01, 0x90, 0x00, 0x50, 0x00,
0x30, 0x00 };

//---bluethoot connect icon--- 12 by 12 pixels
const unsigned char BTc[] U8X8_PROGMEM = {
0x30, 0x00, 0x50, 0x00, 0x90, 0x00, 0x11, 0x01, 0x92, 0x00, 0x54, 0x00,
0x39, 0x01, 0x54, 0x00, 0x92, 0x00, 0x11, 0x01, 0x90, 0x00, 0x50, 0x00,
0x30, 0x00 };

//=============================================================================

//--WIFI icons---  13 by 12 pixels
const unsigned char wifi_no_acces_to_internet[] U8X8_PROGMEM = {
0xf0, 0x01, 0x0c, 0x06, 0x06, 0x0c, 0x03, 0x18, 0x01, 0x12, 0x03, 0x1a,
0x06, 0x0a, 0x0c, 0x02, 0x18, 0x02, 0xb0, 0x02, 0xe0, 0x00, 0x40, 0x02 };
   
const unsigned char wifi_0[] U8X8_PROGMEM = {
0xf0, 0x01, 0x0c, 0x06, 0x06, 0x0c, 0x03, 0x18, 0x01, 0x10, 0x03, 0x18,
0x06, 0x0c, 0x0c, 0x06, 0x18, 0x03, 0xb0, 0x01, 0xe0, 0x00, 0x40, 0x00 };

const unsigned char wifi_20[] U8X8_PROGMEM = {
0xf0, 0x01, 0x0c, 0x06, 0x06, 0x0c, 0x03, 0x18, 0x01, 0x10, 0x03, 0x18,
0x06, 0x0c, 0x0c, 0x06, 0xf8, 0x03, 0xf0, 0x01, 0xe0, 0x00, 0x40, 0x00 };

const unsigned char wifi_50[] U8X8_PROGMEM = {
0xf0, 0x01, 0x0c, 0x06, 0x06, 0x0c, 0x03, 0x18, 0xff, 0x1f, 0xff, 0x1f,
0xfe, 0x0f, 0xfc, 0x07, 0xf8, 0x03, 0xf0, 0x01, 0xe0, 0x00, 0x40, 0x00 };

const unsigned char wifi_80[] U8X8_PROGMEM = {
0xf0, 0x01, 0x0c, 0x06, 0xfe, 0x0f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f,
0xfe, 0x0f, 0xfc, 0x07, 0xf8, 0x03, 0xf0, 0x01, 0xe0, 0x00, 0x40, 0x00 };

const unsigned char wifi_100[] U8X8_PROGMEM = {
0xf0, 0x01, 0xfc, 0x07, 0xfe, 0x0f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x1f,
0xfe, 0x0f, 0xfc, 0x07, 0xf8, 0x03, 0xf0, 0x01, 0xe0, 0x00, 0x40, 0x00 };


//=============================================================================




void drawFirmware()
{  
   u8g2.clearBuffer(); 
   u8g2.drawXBMP(0, 0,  64, 64, JDJ_Chip);
   u8g2.setFont(u8g2_font_haxrcorp4089_tr);
   u8g2.drawStr( 70, 15,"Model: NEXT"); 
   u8g2.drawStr( 70, 35,"FW: 1.1"); 
   u8g2.drawStr( 70, 45,"D: 121221"); 
   u8g2.drawStr( 70, 55,"Robert van Breemen"); 
   u8g2.sendBuffer(); 
      
} //drawInit()

//=============================================================================


void drawInit()
{  
   u8g2.clearBuffer();
   u8g2.drawXBMP(115, 0,  13, 12, wifi_no_acces_to_internet);
   u8g2.drawHLine(0, 15, 128); 
   u8g2.setFont(u8g2_font_haxrcorp4089_tr);
   u8g2.drawStr( 0, 10,"DSMR-NEXT");
   u8g2.drawStr( 40, 45,"AP MODE");   
   u8g2.sendBuffer(); 
      
} //drawInit()

//=============================================================================


void drawConnected()
{
   u8g2.clearBuffer();
   u8g2.drawXBMP(115, 0,  13, 12, wifi_20);
   u8g2.drawXBMP(100, 0,  13, 13, BTc);   
   u8g2.drawHLine(0, 15, 128); 
   u8g2.setFont(u8g2_font_haxrcorp4089_tr);
   u8g2.drawStr( 0, 10,"DSMR-NEXT");
   u8g2.drawStr( 35, 45,"CONNECTED");
   //u8g2.drawXBMP(90, 23,  35, 35, Telegram_icon);
   u8g2.sendBuffer();
    
}//drawConnected()

//=============================================================================

void drawTelegram_Logo()
{
   u8g2.clearBuffer();
   u8g2.drawXBMP(40, 0,  100, 67, Telegram_Logo);
   u8g2.setFont(u8g2_font_haxrcorp4089_tr);
   u8g2.drawStr( 15, 35,"POSTING..");
   u8g2.sendBuffer();
    
}//drawConnected()

//=============================================================================


void drawOFF()
{  
   u8g2.clearBuffer();
   u8g2.drawXBMP(115, 0,  13, 12, wifi_no_acces_to_internet);
   u8g2.drawHLine(0, 15, 128);
   u8g2.setFont(u8g2_font_haxrcorp4089_tr);
   u8g2.drawStr( 0, 10,"I'm offline"); 
   u8g2.drawXBMP(30, 25,  60, 35, trex);  
   u8g2.sendBuffer();
   delay(1000); 
   u8g2.clearBuffer();
   u8g2.drawXBMP(115, 0,  13, 12, wifi_no_acces_to_internet);
   u8g2.drawHLine(0, 15, 128);
   u8g2.setFont(u8g2_font_haxrcorp4089_tr);
   u8g2.drawStr( 0, 10,"Connect me to"); 
   u8g2.drawXBMP(30, 25,  60, 35, trex_cactus);   
   u8g2.sendBuffer();
   delay(1000); 
   u8g2.clearBuffer();
   u8g2.drawXBMP(115, 0,  13, 12, wifi_no_acces_to_internet);
   u8g2.drawHLine(0, 15, 128);
   u8g2.setFont(u8g2_font_haxrcorp4089_tr);
   u8g2.drawStr( 0, 10,"the internet !"); 
   u8g2.drawXBMP(30, 25,  60, 35, trex_scared);   
   u8g2.sendBuffer();
   u8g2.clearBuffer();
   delay(1000); 
 
      
} //drawOFF()

//=============================================================================
void drawPower()
{  
  u8g2.clearBuffer();
   u8g2.drawXBMP(115, 0,  13, 12, wifi_20);
   u8g2.drawXBMP(100, 0,  13, 13, BTc);   
   u8g2.drawHLine(0, 15, 128); 
   u8g2.setFont(u8g2_font_haxrcorp4089_tr);
   u8g2.drawStr( 0, 10,"DSMR-NEXT");
   u8g2.drawHLine(0, 38, 128);
   
   u8g2.setCursor(0, 35);
   u8g2.setFont(u8g2_font_open_iconic_embedded_2x_t);
   u8g2.print(char(67)); // aan icoon
   u8g2.setFont(u8g2_font_helvB08_tr);   // select font
   u8g2.drawStr( 15, 30,":");
   
   u8g2.drawHLine(0, 63, 128);
    
   u8g2.setCursor(0, 60);
   u8g2.setFont(u8g2_font_open_iconic_all_2x_t);
   u8g2.print(char(196)); // aan icoon
   u8g2.setFont(u8g2_font_helvB08_tr);   // select font
   u8g2.drawStr( 15, 55,":");
   //u8g2.drawVLine(32, 15, 128);
   
   u8g2.drawVLine(64, 15, 128);
   
   u8g2.setCursor(70, 35);
   u8g2.setFont(u8g2_font_open_iconic_all_2x_t);
   u8g2.print(char(174)); // aan icoon
   u8g2.setFont(u8g2_font_helvB08_tr);   // select font
   u8g2.drawStr( 89, 30,":");
   
   u8g2.setCursor(70, 60);
   u8g2.setFont(u8g2_font_open_iconic_all_2x_t);
   u8g2.print(char(123)); // aan icoon
   u8g2.setFont(u8g2_font_helvB08_tr);   // select font
   u8g2.drawStr( 89, 55,":");
  

   u8g2.sendBuffer();
      
} //drawOFF()

//=============================================================================
