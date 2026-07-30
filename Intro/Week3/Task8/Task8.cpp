#include <iostream>

int main()
{
	int n, k;
	std::cin >> n >> k;

	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		int num = 0;
		for (int j = 0; j < i; j++)
		{
			num += k;

			if (j != i - 1)
				num *= 10;
		}

		sum += num;
	}

	std::cout << sum << std::endl;
}