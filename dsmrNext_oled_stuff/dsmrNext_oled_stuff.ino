#include <Arduino.h>
#include <U8g2lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup() {
  u8g2.begin();
  drawFirmware();
  delay(2000);
  drawInit();
  delay(2000);
  drawConnected();
  delay(2000);
  drawTelegram_Logo();
 

}

void loop() {
 // drawOFF();
// drawConnected();
drawPower();
 
}
