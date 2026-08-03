#include <iostream>
using namespace std;

bool isDivisableByValue(int number, int divisor)
{
	int value = 0;

	while (value < number)
	{
		value += divisor;
	}

	if (value == number)
	{
		return true;
	}

	return false;
}

int main()
{
	cout << isDivisableByValue(6, 3) << endl;
	cout << isDivisableByValue(14, 5) << endl;
}