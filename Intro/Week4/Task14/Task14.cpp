#include<iostream>

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
	size_t length;
	std::cin >> length;

	int GCD = -1, LCM = -1;

	for (size_t i = 0; i < length; i++)
	{
		int num;
		std::cin >> num;

		if (i == 0)
		{
			GCD = num;
			LCM = num;
			continue;
		}

		GCD = gcd(GCD, num);
		LCM = lcm(LCM, num);
	}

	std::cout << "GCD: " << GCD << std::endl;
	std::cout << "LCM: " << LCM << std::endl;
}