#include <iostream>

int main()
{
	int num1, num2, num3, num4;
	std::cin >> num1 >> num2 >> num3 >> num4;

	std::cout << ((num2 + (num2 - num1)) == num3 && (num3 + (num2 - num1)) == num4) << std::endl;
}