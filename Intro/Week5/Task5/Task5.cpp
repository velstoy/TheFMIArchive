#include <iostream>

size_t getLength(int number)
{
	if (number == 0)
	{
		return 1;
	}

	size_t length = 0;

	while (number != 0)
	{
		length++;
		number /= 10;
	}

	return length;
}

int power(int base, unsigned pow)
{
	int value = 1;

	for (size_t i = 0; i < pow; i++)
	{
		value *= base;
	}

	return value;
}

void swapKDigit(int& n, int& m, int k)
{
	size_t lengthN = getLength(n), lengthM = getLength(m);

	if (k > lengthN || k > lengthM)
	{
		std::cout << "Cannot swap digits!" << std::endl;
		return;
	}

	int nPow = power(10, lengthN - k);

	int trailN = n % nPow;

	n /= nPow;

	int mPow = power(10, lengthM - k);

	m /= mPow;

	int trailM = m % mPow;

	int temp = n % 10;

	n /= 10;

	n *= 10;

	n += m % 10;

	n *= nPow;

	n += trailN;

	m /= 10;

	m *= 10;

	m += temp;

	m *= mPow;

	m += trailM;
}

int main()
{
	int n, m, k;
	std::cin >> n >> m >> k;

	swapKDigit(n, m, k);

	std::cout << n << " " << m << " " << k << std::endl;
}