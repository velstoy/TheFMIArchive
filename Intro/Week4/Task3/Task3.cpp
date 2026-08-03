#include <iostream>
using namespace std;

char toUpper(char symbol)
{
	if (symbol >= 'a' && symbol <= 'z')
	{
		return symbol - ('a' - 'A');
	}

	return symbol;
}

char toLower(char symbol)
{
	if (symbol >= 'A' && symbol <= 'Z')
	{
		return symbol + ('a' - 'A');
	}

	return symbol;
}

int main()
{
	cout << toUpper('a') << endl;
	cout << toLower('A') << endl;
}