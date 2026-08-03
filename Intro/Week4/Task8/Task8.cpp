#include <iostream>

double mySqrt(double number, double epsilon = 0.000001)
{
	if (number <= 0 || epsilon <= 0)
	{
		return -1;
	}

	double guess = number / 2;
	double nextGuess = (guess + number / guess) / 2;

	int itr = 0;
	int maxItr = 10000;

	while (guess - nextGuess > epsilon && itr < maxItr)
	{
		guess = nextGuess;
		nextGuess = (guess + number / guess) / 2;

		itr++;
	}

	return nextGuess;
}

bool isPrime(unsigned int number)
{
	if (number == 0 || number == 1)
	{
		return false;
	}

	if (number == 2)
	{
		return true;
	}

	for (unsigned int i = 2; i < (int)mySqrt(number); i++)
	{
		if (number % i == 0) 
		{
			return false;
		}
	}

	return true;
}

int main()
{
	std::cout << std::boolalpha << isPrime(1054693) << std::endl;
}