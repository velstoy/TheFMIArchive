#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int num1 = 0;

	if (n == 1)
	{
		std::cout << num1 << std::endl;
		return 0;
	}

	int num2 = 1;
	if (n == 2)
	{
		std::cout << num2 << std::endl;
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		int temp = num2;

		num2 = num1 + num2;

		num1 = temp;

		if (i == n - 1)
		{
			std::cout << num2 << std::endl;
		}
	}
}