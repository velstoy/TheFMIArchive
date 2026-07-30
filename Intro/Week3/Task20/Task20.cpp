#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << j + 1 << " ";
		}
		for (int j = 0; j < (n - i) * 2; j++)
		{
			std::cout << " ";
		}
		for (int j = 0; j < n; j++)
		{
			if (i == n)
			{
				std::cout << "-";
			}
			else
			{
				std::cout << " ";
			}
		}
		for (int j = 0; j < (n - i) * 2; j++)
		{
			std::cout << " ";
		}
		for (int j = i - 1; j >= 0; j--)
		{
			std::cout << " " << j + 1;
		}
		std::cout << std::endl;
	}

	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << j + 1 << " ";
		}
		for (int j = 0; j < (n - i) * 4 + n; j++)
		{
			std::cout << " ";
		}
		for (int j = i - 1; j >= 0; j--)
		{
			std::cout << " " << j + 1;
		}
		std::cout << std::endl;
	}
}