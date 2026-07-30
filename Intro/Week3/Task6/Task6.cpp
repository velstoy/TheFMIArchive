#include <iostream>

int main()
{
	int count = 0;
	int sum = 0;

	while (count < 5)
	{
		int num;
		std::cin >> num;

		if (num > 0)
		{
			sum += num;
			count++;
		}
	}

	std::cout << sum << std::endl;
}