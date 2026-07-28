#include <iostream>

int main()
{
	unsigned num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;

	std::cout << ((num1 + num2 > num3) && (num1 + num3 > num2) && (num2 + num3 > num1)) << std::endl;
}