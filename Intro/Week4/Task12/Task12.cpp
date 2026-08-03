#include <iostream>

int getSingleDigitSum(unsigned long long number)
{
	unsigned long long sum = number;

	while (sum / 10 != 0)
	{
		unsigned long long innerSum = 0;

		while (sum != 0)
		{
			innerSum += sum % 10;

			sum /= 10;
		}

		sum = innerSum;
	}

	return sum;
}

int main()
{
	std::cout << getSingleDigitSum(999999999999) << std::endl;
}