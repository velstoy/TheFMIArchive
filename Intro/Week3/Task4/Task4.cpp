#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int max = -1;

	for (int i = 0; i < n; i++)
	{
		int num;
		std::cin >> num;

		if (i == 0)
		{
			max = num;
			continue;
		}

		max = num > max ? num : max;
	}

	if (n > 0)
	{
		std::cout << "Max: " << max << std::endl;
	}
	else
	{
		std::cout << "Error: You entered 0 or negative count!" << std::endl;
	}
}