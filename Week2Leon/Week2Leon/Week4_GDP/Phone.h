#pragma once
#include <iostream>
#include <string>

class Phone
{

public:
	Phone(std::string Name, int SerialNumber);

	void PrintInformation();

	void PrintBatteryLife();

	void TakePicture();

	void SetFactoryDefaults(float DefaultBatteryLife, float DefaultTemperature);

	float GetBatteryLife();

	void IncreaseBatteryLife(float charge);

	void MakeCall();

	int GetSerial();
	void SetSerial(int newSerial);


private:
	std::string Name;
	int SerialNumber;
	float BatteryLife;
	float InternalTemperature;


};





