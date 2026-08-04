#include <iostream>

constexpr size_t SIZE = 20;

int findMissingElement(const int arr[])
{
	for (size_t i = 0; i <= 20; i++)
	{
		bool success = false;

		for (size_t j = 0; j < SIZE; j++)
		{
			if (arr[j] == i)
			{
				success = true;
				break;
			}
		}

		if (!success)
		{
			return i;
		}
	}

	return -1;
}

int main()
{
	int arr[SIZE];

	for (size_t i = 0; i < SIZE; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << findMissingElement(arr) << std::endl;
}