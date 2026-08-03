#include <iostream>

int gcd(int first, int second)
{
	while (first % second != 0)
	{
		int temp = second;
		second = first % second;
		first = temp;
	}

	return second;
}

void simplifyFraction(int& top, int& bottom)
{
	int GCD = gcd(top, bottom);

	while (GCD != 1)
	{
		top /= GCD;
		bottom /= GCD;

		GCD = gcd(top, bottom);
	}
}

int main()
{
	int top, bottom;
	std::cin >> top >> bottom;

	simplifyFraction(top, bottom);

	std::cout << top << std::endl << "-" << std::endl << bottom << std::endl;
}