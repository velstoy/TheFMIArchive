#include <iostream>
using namespace std;

int power(int base, unsigned int exponent)
{
	int res = 1;

	for (unsigned int i = 0; i < exponent; i++)
	{
		res *= base;
	}

	return res;
}

int main()
{
	cout << power(5, 2) << endl;
}