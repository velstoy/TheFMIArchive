#include <iostream>

constexpr size_t MAX_SIZE = 1024;

bool isMonotonicallyDecreasing(const int arr[], size_t size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		if (arr[i] < arr[i + 1]) 
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

	int arr[MAX_SIZE];

	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << std::boolalpha << isMonotonicallyDecreasing(arr, size) << std::endl;
}