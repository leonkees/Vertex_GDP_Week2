#include <iostream>
#include <string>

#include "Phone.h"

#include <vector>


int main()
{

	Phone Iphone("Iphone16", 8382123);
	Phone Galaxy("Samsung Galaxy 15", 112344);
	Phone Pixel("Pixel 8", 12342131);

	Pixel.TakePicture();
	Pixel.SetFactoryDefaults(50, 32);
	std::cout << "the pixel's battery life is: " << std::endl;
	Pixel.PrintBatteryLife();

	/*Pixel.IncreaseBatteryLife(20);
	std::cout << "the pixel's battery life is: " << std::endl;
	Pixel.PrintBatteryLife();

	Pixel.IncreaseBatteryLife(20);
	std::cout << "the pixel's battery life is: " << std::endl;
	Pixel.PrintBatteryLife();

	Pixel.IncreaseBatteryLife(20);
	std::cout << "the pixel's battery life is: " << std::endl;
	Pixel.PrintBatteryLife();

	Pixel.IncreaseBatteryLife(20);
	std::cout << "the pixel's battery life is: " << std::endl;
	Pixel.PrintBatteryLife();

	Pixel.IncreaseBatteryLife(20);
	std::cout << "the pixel's battery life is: " << std::endl;
	Pixel.PrintBatteryLife();*/

	/*Pixel.MakeCall();
	Pixel.MakeCall();
	Pixel.MakeCall();
	Pixel.MakeCall();
	Pixel.MakeCall();
	Pixel.MakeCall();
	Pixel.MakeCall();
	Pixel.MakeCall();
	Pixel.MakeCall();
	Pixel.MakeCall();
	Pixel.MakeCall();
	Pixel.IncreaseBatteryLife(20);
	std::cout << "the pixel's battery life is: " << std::endl;
	Pixel.PrintBatteryLife();
	Pixel.MakeCall();
	Pixel.MakeCall();
	Pixel.MakeCall();
	Pixel.MakeCall();*/


	//Galaxy.SetFactoryDefaults(8, 43);

	//Iphone.PrintInformation();

	//Galaxy.PrintInformation();
	//Galaxy.PrintBatteryLife();

	//Iphone.TakePicture();


	std::cout << "old serial is: " << Pixel.GetSerial() << std::endl;

	Pixel.SetSerial(3213);										/// this breaks if I put a huge int like 555555555555555 (?)

	std::cout << "new serial is: " << Pixel.GetSerial() << std::endl;

}


//	std::vector<Phone> v;
//	std::string inputName;
//	int inputSerial;
//	while (true) {
//
//		std::cout << "input the new serial (0 to end): " << std::endl;
//		std::cin >> inputSerial;
//
//		if (inputSerial == 0) { break; }
//
//		std::cout << "input the new phone's name: " << std::endl;
//		std::cin >> inputName;
//
//		v.push_back(Phone(inputName, inputSerial));
//
//	}
//
//	for (Phone i : v) { i.PrintInformation(); };
//
//
//	return 0;
//}

