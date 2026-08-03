#include <iostream>
using namespace std;

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

unsigned int concat(unsigned int first, unsigned int second)
{
	size_t length = getLength(second);

	first *= power(10, length);

	first += second;

	return first;
}

int main()
{
	cout << concat(123, 456) << endl;
}