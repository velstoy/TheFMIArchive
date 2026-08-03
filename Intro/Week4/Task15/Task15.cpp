#include <iostream>
using namespace std;

bool isSquareRoot(int number)
{
	int itr = 1;

	while (itr * itr < number)
	{
		itr++;
	}

	return itr * itr == number;
}

int main()
{
	cout << isSquareRoot(24) << endl;
	cout << isSquareRoot(25) << endl;
}