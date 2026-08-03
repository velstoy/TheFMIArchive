#include <iostream>

size_t getLength(int number)
{
	size_t length = 0;

	while (number != 0)
	{
		number /= 10;
		length++;
	}

	return length;
}

int power(int base, unsigned int exponent)
{
	int res = 1;

	for (unsigned int i = 0; i < exponent; i++)
	{
		res *= base;
	}

	return res;
}

unsigned int sortDigits(unsigned int number)
{
	unsigned int res = 0;

	while (number != 0)
	{
		int min = number % 10;

		int index = 0;

		for (int i = 0, tempNum = number; tempNum != 0; i++)
		{
			if (tempNum % 10 < min) 
			{
				min = tempNum % 10;
				index = i;
			}

			tempNum /= 10;
		}

		res *= 10;
		res += min;

		int tempPow = power(10, index);

		int temp = number % tempPow;

		number /= tempPow;

		number /= 10;

		number *= tempPow;

		number += temp;
	}

	return res;
}

int main()
{
	std::cout << sortDigits(4132) << std::endl;
}