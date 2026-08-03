#include <iostream>
using namespace std;

bool isDigit(char symbol)
{
	if (symbol >= '0' && symbol <= '9')
	{
		return true;
	}

	return false;
}

int main()
{
	cout << isDigit('а') << endl;
	cout << isDigit('0') << endl;
}