#include <iostream>

double power(double base, unsigned pow)
{
	double res = 1;

	for (unsigned i = 0; i < pow; i++)
	{
		res *= base;
	}

	return res;
}

double ln(int x, unsigned accuracy)
{
	if (accuracy <= 0)
	{
		return -1;
	}

	double z = (x - 1.0) / (x + 1.0);

	double res = 0;

	for (unsigned i = 1; i <= accuracy; i += 2)
	{
		res += power(z, i) / i;
	}

	res *= 2;

	return res;
}

double log(unsigned n, unsigned k, unsigned accuracy = 1000)
{
	if (n <= 1 || k <= 0)
	{
		return -1;
	}

	double res = 0;

	unsigned initN = n, initK = k;

	while (n != 0)
	{
		if (n % k != 0 && n != 1)
		{
			return ln(initN, accuracy) / ln(initK, accuracy);
		}

		n /= k;
		res++;
	}

	return res;
}

int main()
{
	std::cout << log(10000, 10) << std::endl;
}