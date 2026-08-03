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

int getDigitOnPosition(int number, unsigned int position)
{
	if (number <= 0 || position <= 0)
	{
		return -1;
	}

	size_t length = getLength(number);

	if (position > length)
	{
		return -1;
	}

	for (size_t i = 0; i < length - position; i++)
	{
		number /= 10;
	}

	return number % 10;
}

int main()
{
	cout << getDigitOnPosition(6289, 3) << endl;
}