#include <iostream>
using namespace std;

constexpr double EPSILON = 0.00001;

int squareRootToLower(int number)
{
	double guess = number / 2.0;

	double nextGuess = (guess + number / guess) / 2;

	while (guess - nextGuess >= EPSILON)
	{
		guess = nextGuess;

		nextGuess = (guess + number / guess) / 2;
	}

	return nextGuess;
}

int main()
{
	cout << squareRootToLower(24) << endl;
}