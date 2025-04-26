//#include <iostream>
//#include <string>
//
//void PrintInput(std::string Name, int Age) 
//{
//	if (Name.empty() || Age <=0) 
//	{
//		std::cout << "Data is invalid" << std::endl;
//		return;
//	}
//
//	std::cout << "Name is " << Name << " Age is " << Age << std::endl;
//	
//	if (Age < 18) 
//	{
//		std::cout << "Ah you are a minor ! Good luck on your schooling!" << std::endl;
//	}
//	else if ((Age >= 18 ) && (Age < 30)) 
//	{
//		std::cout << "You are an adult but not yet 30!" << std::endl;
//	
//	}
//	else if ((Age >= 30) && (Age < 65))
//	{
//		std::cout << "Its not time to retire yet!" << std::endl;
//		if (Age == 38) 
//		{
//			std::cout << "Same age as Lady Gaga!" << std::endl;
//		}
//	}
//	else 
//	{
//		std::cout << "Whats up grandpa!" << std::endl;
//	}
//}
//
//
//int main()
//{
//	std::string InputName;
//	int InputAge;
//	std::getline(std::cin, InputName);
//	std::cin >> InputAge;
//
//	PrintInput(InputName, InputAge);
//
//	return 0;
//}