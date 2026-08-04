#include <iostream>

constexpr size_t MAX_SIZE = 1024;

void getElementsInInterval(const int arr[], size_t arrSize, int res[], size_t& resSize, int begin, int end)
{
	if (begin > end)
	{
		return;
	}

	resSize = 0;

	for (size_t i = 0; i < arrSize; i++)
	{
		if (arr[i] >= begin && arr[i] <= end)
		{
			res[resSize++] = arr[i];
		}
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

	int begin, end;
	std::cin >> begin >> end;

	size_t resSize;
	int res[MAX_SIZE];

	getElementsInInterval(arr, size, res, resSize, begin, end);

	for (size_t i = 0; i < resSize; i++)
	{
		std::cout << res[i] << " ";
	}

	std::cout << std::endl;
}