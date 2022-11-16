/*
 * this file is used to read the temperature analog value
 * it inherits functions and classes from AnalogIn.h and AnalogIn.cpp
 * This takes no command-line arguments
 *
 */

#include<iostream>
#include<string>
#include"AnalogIn.h"
using namespace std;
int main(int argc, char* argv[]){
	AnalogIn AIN(0);
	cout << "The AIN number is: " << AIN.getNumber() << endl;
	cout << "The ADC value input is: " << AIN.readAdcSample() << endl;
}
