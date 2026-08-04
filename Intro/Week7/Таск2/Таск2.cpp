#include <iostream>

constexpr size_t MAX_SIZE = 1024;

void flipFirstN(int arr[], size_t size, int n)
{
	if (n <= 0 || n > size)
	{
		return;
	}

	for (size_t i = 0; i < n / 2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
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

	int n;
	std::cin >> n;

	flipFirstN(arr, size, n);

	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
}