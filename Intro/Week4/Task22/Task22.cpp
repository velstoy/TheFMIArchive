#include <iostream>

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

	int squareRoot = squareRootToLower(number);

	for (unsigned int i = 2; i < squareRoot; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}

void primeFactorization(unsigned number)
{
	bool started = false;

	int squareRoot = squareRootToLower(number);

	for (size_t i = 2; i < squareRoot && number != 1; i++)
	{
		if (number % i == 0)
		{
			if (isPrime(i))
			{
				if (!started)
				{
					std::cout << i;
					started = true;
				}
				else
				{
					std::cout << "." << i;
				}

				number /= i;
				i--;
			}
		}
	}
}

int main()
{
	primeFactorization(225);
}