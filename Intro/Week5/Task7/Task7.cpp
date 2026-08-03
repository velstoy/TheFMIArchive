#include <iostream>

size_t getLength(int number)
{
	if (number == 0)
	{
		return 1;
	}

	size_t length = 0;

	while (number != 0)
	{
		length++;
		number /= 10;
	}

	return length;
}

int power(int base, int pow)
{
	int value = 1;

	for (size_t i = 0; i < pow; i++)
	{
		value *= base;
	}

	return value;
}

void getSubnum(int& number, unsigned i, unsigned j)
{
	size_t len = getLength(number);

	if (i == 0 || j == 0 || i > j || i > len || j > len)
	{
		return;
	}

	number %= power(10, len - i + 1);

	number /= power(10, len - j);
}

int main()
{
	int number, i, j;
	std::cin >> number >> i >> j;

	getSubnum(number, i, j);

	std::cout << number << std::endl;
}