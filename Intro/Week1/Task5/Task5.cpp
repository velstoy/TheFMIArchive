#include <iostream>

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	int sum = num1 + num2;
	int subtraction = num1 - num2;
	int product = num1 * num2;
	int division = num1 / num2;

	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Subtraction: " << subtraction << std::endl;
	std::cout << "Product: " << product << std::endl;
	std::cout << "Division: " << division << std::endl;
}