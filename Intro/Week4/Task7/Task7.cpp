#include <iostream>

int absoluteValue(int number)
{
	return number < 0 ? -number : number;
}

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

int lcm(int first, int second)
{
	return absoluteValue(first * second) / gcd(first, second);
}

int main()
{
	std::cout << lcm(6, 9) << std::endl;
}