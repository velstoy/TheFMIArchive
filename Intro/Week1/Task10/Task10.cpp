#include <iostream>

int getDigitSum(int num);

int getDigitProduct(int num);

size_t getDigitCount(int num);

double getDigitAverage(int num);

int main()
{
	int num;
	std::cin >> num;

	std::cout << "Sum: " << getDigitSum(num) << std::endl;
	std::cout << "Product: " << getDigitProduct(num) << std::endl;
	std::cout << "Average: " << getDigitAverage(num) << std::endl;
}

int getDigitSum(int num)
{
	int sum = 0;

	while (num != 0)
	{
		sum += num % 10;
		num /= 10;
	}

	return sum;
}

int getDigitProduct(int num)
{
	int product = 0;

	if (num != 0)
	{
		product++;
	}

	while (num != 0)
	{
		product *= num % 10;

		num /= 10;
	}

	return product;
}

size_t getDigitCount(int num)
{
	size_t count = 0;

	while (num != 0)
	{
		count++;
		num /= 10;
	}

	return count;
}

double getDigitAverage(int num)
{
	return getDigitSum(num) / (double)getDigitCount(num);
}
