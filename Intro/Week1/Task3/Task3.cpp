#include <iostream>

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	int res = (num1 % 100) * 100 + num2 % 100;
	std::cout << res << std::endl;
}