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

void swapKDigits(int& a, int& b, int k)
{
	if (a < 0 || b < 0 || k < 0)
	{
		return;
	}

	size_t lenA = getLength(a);
	size_t lenB = getLength(b);

	if (k > lenA)
	{
		return;
	}

	int powA = power(10, k);

	int trailA = a % powA;

	a /= powA;

	b = (trailA * power(10, lenB)) + b;
}

int main()
{
	int a, b, k;
	std::cin >> a >> b >> k;

	swapKDigits(a, b, k);

	std::cout << a << " " << b << std::endl;
}