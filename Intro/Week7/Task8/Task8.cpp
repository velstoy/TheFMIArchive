#include <iostream>

constexpr size_t SIZE = 5;

void addOne(int arr[])
{
	for (size_t i = 0; i < SIZE; i++)
	{
		if (arr[SIZE - i - 1] == 9) 
		{
			arr[SIZE - i - 1] = 0;
			continue;
		}

		arr[SIZE - i - 1]++;
		break;
	}
}

int main()
{
	int arr[SIZE];

	for (size_t i = 0; i < SIZE; i++)
	{
		std::cin >> arr[i];
	}

	addOne(arr);

	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << arr[i];
	}

	std::cout << std::endl;
}