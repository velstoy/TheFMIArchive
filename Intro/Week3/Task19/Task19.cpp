#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int start = n;

	while (n != 0)
	{
		int power = 0;
		int res = 1;

		while (res * 2 <= n)
		{
			power++;
			res *= 2;
		}

		if (n == start)
		{
			std::cout << "2^" << power;
		}
		else
		{
			std::cout << " + 2^" << power;
		}

		n -= res;
	}

	std::cout << std::endl;
}