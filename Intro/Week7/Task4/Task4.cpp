#include <iostream>

constexpr size_t MAX_SIZE = 1024;

bool isPermutation(const int original[], const int other[], size_t size)
{
	bool found[MAX_SIZE]{false};

	for (size_t i = 0; i < size; i++)
	{
		bool success = false;

		for (size_t j = 0; j < size; j++)
		{
			if (original[i] == other[j] && !found[j]) 
			{
				found[j] = true;
				success = true;
				break;
			}
		}

		if (!success)
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

	int arr1[MAX_SIZE];
	int arr2[MAX_SIZE];

	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr1[i];
	}

	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr2[i];
	}

	std::cout << std::boolalpha << isPermutation(arr1, arr2, size) << std::endl;
}