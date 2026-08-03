#include <iostream>

constexpr size_t MAX_SIZE = 1024;

double getAvg(const double arr[], size_t size)
{
	double sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	return sum / size;
}

int main()
{
	size_t size;
	std::cin >> size;

	double arr[MAX_SIZE];

	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}

	double avg = getAvg(arr, size);

	std::cout << avg << std::endl;
}