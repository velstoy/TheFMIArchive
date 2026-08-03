#include <iostream>
using namespace std;

unsigned long long closestPowerOfTwo(unsigned long long number)
{
	unsigned long long value = 1;

	while (number > value)
	{
		value *= 2;
	}

	if (value - number > number - value / 2)
	{
		return value / 2;
	}

	return value;
}

int main()
{
	cout << closestPowerOfTwo(150) << endl;
	cout << closestPowerOfTwo(1000) << endl;
	return 0;
}