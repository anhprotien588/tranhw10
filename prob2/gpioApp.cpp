/*
 * The file gpioApp.cpp application is used to control the gpio pins
 * Using the classes GPIO, LED and AnalogIn
 * It takes no command-line arguments to implement
 * Press and hold the "push button" when executing to turn on the LED
 *
 */
#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>
#include<unistd.h>
#include"derek_LED.h"
#include"AnalogIn.h"
#include"GPIO.h"
using namespace exploringBB;
using namespace std;

#define LED3_PATH "/sys/class/leds/beaglebone:green:usr3"

int main(){
   cout << "Starting the gpioApp program" << endl;
   LED(1).turnOn();
   LED(3).turnOn();
   LED(2).flash(3);
   AnalogIn AIN(0);
   cout << "The ADC value input is: " << AIN.readAdcSample() << endl;
   GPIO outGPIO(60), inGPIO(46);
   outGPIO.setDirection(OUTPUT);
   inGPIO.setDirection(INPUT);
   cout << "The value of the input is: " << inGPIO.getValue() << endl;
   outGPIO.streamOpen();
   if(inGPIO.getValue() == 0){outGPIO.streamWrite(HIGH);}
   outGPIO.streamClose();  
}
