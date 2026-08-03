#include <iostream>

constexpr size_t MAX_SIZE = 1024;

bool hasDifferentElements(const int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				return false;
			}
		}
	}

	return true;
}

int main()
{
	size_t size;
	std::cin >> size;

	int arr[MAX_SIZE];

	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << hasDifferentElements(arr, size) << std::endl;
}