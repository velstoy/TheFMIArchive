#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	if (num < 0)
	{
		std::cout << "Number cannot be negative!" << std::endl;
		return -1;
	}

	int res = 1;

	for (size_t i = 1; i <= num; i++)
	{
		res *= i;
	}

	std::cout << res << std::endl;
}