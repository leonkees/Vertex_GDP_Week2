/*

1. Ask for the Name and Age of a User :
Step - by - step :
	Declare a std::string variable for the name and an int for the age.
	Use std::cout to ask the user for their name and std::cin to read it.
	Use std::cout again to ask for the user's age and std::cin to read the number.
	Print the name and age using std::cout


------------------------------------------------------------------------------------

2. Ask the User for a Temperature in Celsius and Convert to Fahrenheit :
Step - by - step :
	Ask the user to input a temperature in Celsius.
	Store that temperature in a float variable.
	Convert it to Fahrenheit using the formula F = (C * 9 / 5) + 32.
	Print the result using std::cout.
	Part b.Convert Kilometers to Miles :

Step - by - step :
	Ask the user to input a distance in kilometers.
	Store the distance in a float variable.
	Convert it to miles using the formula Miles = Km * 0.621371.
	Print the result.
	Part c.Convert Pounds to Kilograms :

Step - by - step :
	Ask the user to input a weight in pounds.
	Store the weight in a float variable.
	Convert it to kilograms using the formula Kg = Pounds * 0.453592.
	Print the result.
	Part d.Convert Dollars to Euros :

Step - by - step :
	Ask the user to input an amount in dollars.
	Store the amount in a float variable.
	Convert it to euros using a conversion rate(you can set one like Euros = Dollars * 0.85).
	Print the result.



#include <iostream>
#include <string>

int main()
{
	std::string Input;

	std::cout << "Please input your name" << std::endl;
	std::cin >> Input;
	std::cout << "Thank you " << Input << std::endl;

	std::cout << "Please input your age" << std::endl;
	std::cin >> Input;
	std::cout << "Ah so you are " << Input << " years old!" << std::endl;

	std::cout << "Please input a KM number" << std::endl;
	std::cin >> Input;

	float Km = std::stof(Input);
	float miles = Km * 0.621371;
	std::cout << Km << "Km's" << "Is " << miles << " miles" << std::endl;


	return 0;
}


----------------------------------------------------------------------------------------------------



3. Create a Vector of 4 Float Numbers :

Step - by - step :
	Create 4 float variables to store the numbers.
	Ask the user to input four numbers and store them in each variable.
	Part a.Compute the Average :

Step - by - step :
	Add all 4 numbers together.
	Divide the sum by 4 to get the average.
	Print the average.
	Hint : To compute an average, add all the numbers together, then divide by the number of values(4 in this case).


code: 

#include <iostream>
#include <string>
#include <vector>
#include <numeric>

int main() 
{
	float num1, num2, num3, num4;
	std::vector<float> numbers;

	std::cout << "Please enter the first number:";
	std::cin >> num1;
	numbers.push_back(num1);


	std::cout << "Please enter the second number:";
	std::cin >> num2;
	numbers.push_back(num2);


	std::cout << "Please enter the third number:";
	std::cin >> num3;
	numbers.push_back(num3);


	std::cout << "Please enter the fourth number:";
	std::cin >> num4;
	numbers.push_back(num4);

	//float sum = num1 + num2 + num3 + num4;
	//float average = sum / 4;
	float average = std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();

	std::cout << "The average of the four numbers is :" << average << std::endl;

	return 0;
}
--------------------------------------------------------------------------------------------------------
*/


/* Do this one after week 2 
4.  Ask the user to input 5 integers and store them in a vector
	a. Print the sum of all the integers   (std::acc***)
	b . Largest and Smallest number in the vector (*std::...)
	c. Ask the user for a number -  search it to see if its in the vector  (std:
*/