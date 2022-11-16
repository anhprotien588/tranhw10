/*
 * this file is used to read the temperature analog value
 * it inherits functions and classes from AnalogIn.h and AnalogIn.cpp
 * This takes no command-line arguments
 *
 */

#include<iostream>
#include<string>
#include<cmath>
#include"AnalogIn.h"
using namespace std;

double converter(int adc){
	double result = -(adc * 10000) / (adc - 4095);
	return round(result);
}
int main(int argc, char* argv[]){
	AnalogIn AIN(0);
	AIN.getNumber();
	int adc = AIN.readAdcSample();
	cout << "Using AIN0 to read analog value" << endl;
	cout << "Measuring resistance..." << endl;
	cout << "ADC value is: " << adc << endl;
	cout << ""<< endl;
	double result = converter(adc);
	if(result > 1000){
		result = result/1000;
		cout << "Resistance: " << floor(result*100)/100 << "K Ohms" << endl;
	}
	else{
		cout << "Resistance: " << result << " Ohms" <<  endl;
	}

}
