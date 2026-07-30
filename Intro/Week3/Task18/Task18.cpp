#include <iostream>

int main()
{
	int n;
	char c;
	std::cin >> n >> c;

	for (int i = 1; i <= n * 2; i += 2)
	{
		for (int j = 0; j < n - (i / 2) - 1; j++)
		{
			std::cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			std::cout << c;
		}
		std::cout << std::endl;
	}

	for (int i = n * 2 - 3; i >= 1; i -= 2)
	{
		for (int j = 0; j < n - (i / 2) - 1; j++)
		{
			std::cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			std::cout << c;
		}
		std::cout << std::endl;
	}
}