#ifndef _ENKFI_4IN2_H_
#define _ENKFI_4IN2_H_

#include <Arduino.h>
#include <stdlib.h>
#include <SPI.h>

// Display Pins
#define DISPLAY_SCK_PIN  12
#define DISPLAY_MOSI_PIN 11
#define DISPLAY_CS_PIN   10
#define DISPLAY_RST_PIN  14
#define DISPLAY_DC_PIN   13
#define DISPLAY_BUSY_PIN 21

// Display resolution
#define ENKFI_WIDTH       400
#define ENKFI_HEIGHT      300

void ENKFI_Config(void);
void ENKFI_SPI(uint8_t data);
void ENKFI_Init(void);
void ENKFI_Clear(void);
void ENKFI_Display(uint8_t *Imageblack, uint8_t *Imagered);
void ENKFI_Display_Black(uint8_t *Imageblack);
void ENKFI_Display_Red(uint8_t *Imagered);
void ENKFI_Sleep(void);

#endif
