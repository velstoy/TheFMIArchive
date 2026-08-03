#include <iostream>

constexpr size_t MAX_SIZE = 1024;

bool isSymmetrical(const char arr[], size_t size)
{
	for (size_t i = 0; i < size / 2; i++)
	{
		if (arr[i] != arr[size - i - 1])
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

	char arr[MAX_SIZE];

	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << isSymmetrical(arr, size) << std::endl;
}