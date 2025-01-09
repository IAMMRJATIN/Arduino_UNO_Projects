/*1*/

/*#include<LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);  //rs,en,d4,d5,d6,d7.
byte smiley[8]=
{
  0b00000,
  0b00000,
  0b01010,
  0b00000,
  0b10001,
  0b01110,
  0b00000,
  0b00000,
};

void setup() {
 lcd.begin(16,2);
 lcd.createChar(0,smiley);

 lcd.setCursor(0,0);
 lcd.write(byte(0));
 
}

void loop() {


}*/


/*2*/

/*#include<LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);  //rs,en,d4,d5,d6,d7.
byte battery1[8]=
{
  0b01110,
  0b01010,
  0b10001,
  0b10001,
  0b10001,
  0b11111,
  0b11111,
  0b00000,
};

byte battery2[8]=
{
  0b01110,
  0b01010,
  0b10001,
  0b10001,
  0b11111,
  0b11111,
  0b11111,
  0b00000,
};

byte battery3[8]=
{
  0b01110,
  0b01010,
  0b10001,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b00000,
};

byte battery4[8]=
{
  0b01110,
  0b01110,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b00000,
};

void setup() {
 lcd.begin(16,2);
 lcd.createChar(1,battery1);
 lcd.createChar(2,battery2);
 lcd.createChar(3,battery3);
 lcd.createChar(4,battery4);
}

void loop() {
lcd.setCursor(1,0);
 lcd.write(1);
 delay(500);
 lcd.setCursor(1,0);
 lcd.write(2);
 delay(500);
 lcd.setCursor(1,0);
 lcd.write(3);
 delay(500);
 lcd.setCursor(1,0);
 lcd.write(4);
 delay(500);
}*/


/*3*/


#include<LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);
byte dyno1[8]=
{
  0b00011,
  0b00011,
  0b00010,
  0b00011,
  0b10111,
  0b11111,
  0b01010,
  0b00000,
};

byte dyno2[8]=
{
  0b00011,
  0b00011,
  0b00010,
  0b00011,
  0b10111,
  0b11111,
  0b00101,
  0b00000,
};

void setup() {
 lcd.begin(16,2);
 lcd.createChar(1,dyno1);
 lcd.createChar(2,dyno2);
}
void loop() {
lcd.setCursor(1,0);
 lcd.write(1);
 delay(50);
 lcd.setCursor(1,0);
 lcd.write(2);
 delay(50);
}
