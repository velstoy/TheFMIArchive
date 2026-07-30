#include <iostream>

int main()
{
	int count = 0;
	int sum = 0;

	while (count < 3)
	{
		int num;
		std::cin >> num;

		if (num < 0)
		{
			count++;
			sum += num;
			continue;
		}

		count = 0;
		sum = 0;
	}

	std::cout << sum << std::endl;
}