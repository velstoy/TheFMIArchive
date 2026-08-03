#include <iostream>
using namespace std;

int getDivision(int first, int second)
{
	int value = 0;

	while (value + second <= first)
	{
		value += second;
	}

	return first - value;
}

int main()
{
	cout << getDivision(30, 7) << endl;
}