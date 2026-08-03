#include <iostream>

constexpr size_t MAX_SIZE = 1024;

bool areLinearlyDependant(const int arr1[], const int arr2[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr2[i] % arr1[i] != 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	size_t size;
	std::cin >> size;

	int arr1[MAX_SIZE], arr2[MAX_SIZE];

	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr1[i];
	}

	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr2[i];
	}
	
	std::cout << areLinearlyDependant(arr1, arr2, size) << std::endl;
}