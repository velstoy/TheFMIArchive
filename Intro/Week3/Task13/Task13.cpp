#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int sum = 0;

		int num = i;
		while (num != 0)
		{
			sum += num % 10;
			num /= 10;
		}

		if (sum % 2 == 0)
		{
			std::cout << i << " ";
		}
	}
}