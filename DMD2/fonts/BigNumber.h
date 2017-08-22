
#ifndef BIGNUMBER_H
#define BIGNUMBER_H

#define BIGNUMBER_WIDTH 6
#define BIGNUMBER_HEIGHT -16

const static uint8_t BigNumber[] PROGMEM = {
    0x03, 0xD0, 
    0x06, 
    0x0F, 
    0x30, 
    0x0A, 
    
   
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
    0x06, 0x06, 
    
   
    0xFC, 0xFE, 0x02, 0x02, 0xFE, 0xFC, 0x3F, 0x7F, 0x40, 0x40, 0x7F, 0x3F, // 48
    0x08, 0x0C, 0xFE, 0xFE, 0x00, 0x00, 0x40, 0x40, 0x7F, 0x7F, 0x40, 0x40, // 49
    0x0C, 0x0E, 0x02, 0xC2, 0xFE, 0x3C, 0x70, 0x7C, 0x6F, 0x63, 0x60, 0x60, // 50
    0x0C, 0x8E, 0x82, 0x82, 0xFE, 0x7C, 0x30, 0x71, 0x41, 0x41, 0x7F, 0x3E, // 51
    0x80, 0xE0, 0x78, 0xFE, 0xFE, 0x00, 0x0F, 0x0F, 0x48, 0x7F, 0x7F, 0x48, // 52
    0x7E, 0x7E, 0x22, 0x22, 0xE2, 0xC2, 0x30, 0x70, 0x40, 0x40, 0x7F, 0x3F, // 53
    0xF0, 0xF8, 0x4C, 0x46, 0xC2, 0x82, 0x3F, 0x7F, 0x40, 0x40, 0x7F, 0x3F, // 54
    0x02, 0x02, 0x02, 0xE2, 0xFE, 0x1E, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, // 55
    0x7C, 0xFE, 0x82, 0x82, 0xFE, 0x7C, 0x3E, 0x7F, 0x41, 0x41, 0x7F, 0x3E, // 56
    0xFC, 0xFE, 0x02, 0x02, 0xFE, 0xFC, 0x41, 0x43, 0x62, 0x32, 0x1F, 0x0F // 57
    
};

#endif
