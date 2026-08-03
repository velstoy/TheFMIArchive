#include <iostream>

constexpr double EPSILON = 0.00001;

double mySqrt(int number)
{
	double guess = number / 2;

	double nextGuess = (guess + number / guess) / 2;

	while (guess - nextGuess > EPSILON)
	{
		guess = nextGuess;

		nextGuess = (guess + number / guess) / 2;
	}

	return nextGuess;
}

bool isPrime(int number)
{
	if (number == 0 || number == 1)
	{
		return false;
	}

	if (number == 2)
	{
		return true;
	}

	int squareRoot = mySqrt(number);

	for (int i = 2; i <= squareRoot; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}

int getPrimeDividerCount(int number)
{
	int count = 0;

	for (int i = 2; i <= number; i++)
	{
		if (number % i == 0 && isPrime(i))
		{
			count++;
		}
	}

	return count;
}

int getMinWithDividers(int a, int b, int k)
{
	for (int i = a; i <= b; i++)
	{
		if (getPrimeDividerCount(i) == k)
		{
			return i;
		}
	}

	return -1;
}

int getMaxWithDividers(int a, int b, int k)
{
	for (int i = b; i >= a; i--)
	{
		if (getPrimeDividerCount(i) == k)
		{
			return i;
		}
	}

	return -1;
}

void getNumsWithDividers(int& a, int& b, int k)
{
	a = getMinWithDividers(a, b, k);
	b = getMaxWithDividers(a, b, k);
}

int main()
{
	int a, b, k;
	std::cin >> a >> b >> k;

	getNumsWithDividers(a, b, k);

	std::cout << a << " " << b << std::endl;
}