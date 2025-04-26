//#include <iostream>
//#include <vector>
//
//int main()
//{
//
//	std::vector<float> temperature_list = { 12.3f, 40.0f, 21.5f, 32.0f, -15.0f, 0.0f };
//
//	//Classic Loop
//	for (int i = 0; i < temperature_list.size(); i++) 
//	{
//		float celcius = temperature_list.at(i);
//		float conversion = (temperature_list.at(i) * 1.8) + 32;
//		std::cout << celcius << " Celsius is " << conversion << " in Fahrenheit " << std::endl;
//		if (celcius < 0.0)
//		{
//			std::cout << "Its freezing !!" << std::endl;
//		}
//	}
//
//	//Modern loop
//	for (float temperature : temperature_list)
//	{
//		float conversion = (temperature * 1.8) + 32;
//		std::cout << temperature << " Celsius is " << conversion << " in Fahrenheit " << std::endl;
//	}
//
//}