#include <iostream>

int main()
{
	double num1, num2;

	std::cin >> num1 >> num2;

	(num1 = (num2 = num1)) = num2;

	std::cout << num1 << std::endl;
	std::cout << num2 << std::endl;
}