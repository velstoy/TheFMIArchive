#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int count = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}

	count++;

	std::cout << count << std::endl;
}