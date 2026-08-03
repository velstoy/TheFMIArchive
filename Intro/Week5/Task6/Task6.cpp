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

void getEvenAndOdd(int number, int& evenNum, int& oddNum)
{
	int numLength = getLength(number);

	int i = 1;

	while (number != 0)
	{
		int pow = power(10, numLength - i);

		if (i % 2 == 0)
		{
			evenNum *= 10;

			evenNum += number / pow;
		}
		else
		{
			oddNum *= 10;
			oddNum += number / pow;
		}

		number = number % pow;
		i++;
	}
}

int main()
{
	int number, even = 0, odd = 0;

	std::cin >> number;

	getEvenAndOdd(number, even, odd);
	
	std::cout << even << " " << odd << std::endl;
}