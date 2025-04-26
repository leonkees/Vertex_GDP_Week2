/*

1.
	Ask the user to input 5 integers and store them in a vector
	a. Pass the vector into a function
	b. Get the highest number in the vector
	c. Print it out to the user

//*/
//#include <iostream>
//#include <vector>
//
//int GetHighest(std::vector<int> numbers) 
//{
//	int highest = numbers.at(0);
//	for (int i = 0; i < numbers.size(); i++) 
//	{
//		if (numbers.at(i) > highest) 
//		{
//			highest = numbers.at(i);
//		}
//	}
//	return highest;
//
//}
//
//int main()
//{
//	std::vector<int> numbers(5);
//	//Get user input - 5 times 
//
//	std::cout << "Please enter 5 whole numbers:" << std::endl;
//	for (int i = 0; i < numbers.size(); i++) 
//	{
//		std::cin >> numbers[i];
//
//	}
//	
//	int highest = GetHighest(numbers);
//	std::cout << "The highest number is: " << highest << std::endl;
//
//	return 0;
//}
//

/*
------------------------------------------

2.
	Ask the user for a number input - don't stop filling out your vector until the user presses 0
	Create another function
	Iterate every 2 items of the Vector and multiply it by 2
	print out the numbers


*/

#include <iostream>
#include <vector>

void MultiplyEverySecond(std::vector<int> numbers)
{
	for (int i = 1; i < numbers.size(); i += 2)
	{
		numbers[i] *= 2;
	}

	std::cout << "Modified numbers: ";
	for (int num : numbers)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<int> numbers;
	int input;

	std::cout << "Enter whole numbers (press 0 and enter to stop):" << std::endl;
	while (true)
	{
		std::cin >> input;
		if (input == 0)	break;
		numbers.push_back(input);
	}

	if (numbers.empty()) 
	{
		std::cout << "No numbers entered, nothing to process." << std::endl;
		return 0;
	}

	MultiplyEverySecond(numbers);

	return 0;
}


/*
---------------------------------------------------

3.
	Do a reverse for loop and print out the results


*/

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> numbers = { 1, 2, 3, 4, 5 };

	std::cout << "Reversed numbers: ";
	for (int i = numbers.size() - 1; i >= 0; --i)
	{
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}

/*
	------------------------


4.
	Input a Width and a Height --- and dont stop until they input 0
	Square Meters
	Total square meters of the house

	***
	* while(true)
	* break;

*/


#include <iostream>

int main()
{
	float totalArea = 0;
	float width, height;

	while (true)
	{
		std::cout << "Enter width (0 to stop): ";
		std::cin >> width;
		if (width == 0) break;

		std::cout << "Enter height (0 to stop): ";
		std::cin >> height;
		if (height == 0) break;

		float roomArea = width * height;
		totalArea += roomArea;
		std::cout << "Area of the room: " << roomArea << " square meters." << std::endl;
	}

	std::cout << "Total square meters of the house: " << totalArea << std::endl;

	return 0;
}


