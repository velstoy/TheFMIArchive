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

int main()
{
	cout << getLength(123) << endl;
	cout << getLength(0) << endl;
}