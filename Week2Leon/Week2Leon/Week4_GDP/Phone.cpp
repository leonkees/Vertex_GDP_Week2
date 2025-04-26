//#include <iostream>
//#include <string>
#include "Phone.h"



Phone::Phone(std::string Name, int SerialNumber) : Name(Name), SerialNumber(SerialNumber), BatteryLife(100), InternalTemperature(30.0) {}

void Phone::PrintInformation()
	{
		std::cout << "This is a: " << Name << std::endl;
		std::cout << "Serial Number is: " << SerialNumber << std::endl;
		std::cout << "Temperature is: " << InternalTemperature << std::endl;
	}

void Phone::PrintBatteryLife()
	{
		std::cout << BatteryLife << std::endl;
	}

void Phone::TakePicture()
	{
		std::cout << "Click" << std::endl;
	}

void Phone::SetFactoryDefaults(float DefaultBatteryLife, float DefaultTemperature)
	{
		BatteryLife = DefaultBatteryLife;
		InternalTemperature = DefaultTemperature;

	}

float Phone::GetBatteryLife() { return BatteryLife; }

void Phone::IncreaseBatteryLife(float charge) {

	if (Phone::BatteryLife + charge < 100) {
		Phone::BatteryLife = Phone::BatteryLife + charge;
	}
	else Phone::BatteryLife = 100;
}


void Phone::MakeCall() {
	if (Phone::BatteryLife > 5) {

		Phone::BatteryLife = Phone::BatteryLife - 5;
		std::cout << "Making phone call..." << std::endl;
	}
	else std::cout << "Low battery, please charge!" << std::endl;
}

int Phone::GetSerial()  {
	return SerialNumber;
}

void Phone::SetSerial(int newSerial) {
	SerialNumber = newSerial;
}

