
#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include"AnalogIn.h"
#define ADC_PATH "/sys/bus/iio/devices/iio:device0/in_voltage"
using namespace std;
AnalogIn::AnalogIn(){}

AnalogIn::AnalogIn(unsigned int n){
	this->number = n;
}

void AnalogIn::setNumber(unsigned int n){
	cout << "Inside setNumber()" << endl;
}
int AnalogIn::readAdcSample(){
 stringstream ss;
 ss << ADC_PATH << number << "_raw";
 fstream fs;
 fs.open(ss.str().c_str(), fstream::in);
 fs >> number;
 fs.close();
 return number;

}
AnalogIn::~AnalogIn(){
}
