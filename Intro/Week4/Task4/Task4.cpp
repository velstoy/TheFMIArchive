#include <iostream>
using namespace std;

int toNumber(char symbol)
{
	if (symbol >= '0' && symbol <= '9')
	{
		return symbol - '0';
	}
	
	return -1;
}

char toCharacter(int number)
{
	if (number >= 0 && number <= 9)
	{
		return number + '0';
	}

	return -1;
}

int main()
{
	cout << toNumber('1') << endl;
	cout << toCharacter(3) << endl;
}