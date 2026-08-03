#include <iostream>

void swap(int& first, int& second)
{
	int temp = first;
	first = second;
	second = temp;
}

int gcd(int first, int second)
{
	if (first < second)
	{
		swap(first, second);
	}

	while (first % second != 0)
	{
		int temp = first;
		first = second;
		second = temp % second;
	}

	return second;
}

int main()
{
	std::cout << gcd(15, 25) << std::endl;
}