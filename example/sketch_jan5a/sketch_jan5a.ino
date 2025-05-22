
//**************************************************************//
//  Name    : VFD clock, Hello World
//  Author  : Nicola Di Gregorio, Shy-neon
//  Date    : 25 Mar, 2024
//  Version : 1.0
//  Notes   : Code to comunicate
//          : with the IV-3 display module
//****************************************************************
//Pin connected to RCLK of 74HC595
int latchPin = 9;
//Pin connected to SRCLK of 74HC595
int clockPin = 12;
////Pin connected to DS of 74HC595
int dataPin = 11;

#include <String.h>
#include <time.h>

void setup() {
//set pins to output so you can control the shift register
pinMode(latchPin, OUTPUT);
pinMode(clockPin, OUTPUT);
pinMode(dataPin, OUTPUT);

}

void loop() {
 printString("   shy-neon    ");
}

