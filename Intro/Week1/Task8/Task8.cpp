#include <iostream>

int main()
{
	char c1, c2, c3;
	std::cin >> c1 >> c2 >> c3;

	int sum = c1 + c2 + c3;

	std::cout << (sum % 2 == 0) << std::endl;
}