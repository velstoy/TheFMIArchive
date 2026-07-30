#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int globalCount = 1;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << globalCount << " ";
			globalCount++;
		}

		std::cout << std::endl;
	}
}