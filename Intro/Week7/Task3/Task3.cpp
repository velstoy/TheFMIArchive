#include <iostream>

constexpr size_t MAX_SIZE = 1024;

void findFirstRepeating(const int arr[], size_t size)
{
	int firstRepeating = -1;
	size_t distance = -1;

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j]) 
			{
				if (j - i < distance)
				{
					distance = j - i;
					firstRepeating = arr[i];
				}
				break;
			}
		}
	}

	if (distance != -1)
	{
		std::cout << firstRepeating << std::endl;
	}
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

	findFirstRepeating(arr, size);
}