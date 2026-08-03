#include <iostream>

constexpr size_t MAX_SIZE = 1024;

int findMin(const int arr[], int size)
{
	int min = arr[0];

	for (size_t i = 1; i < size; i++)
	{
		min = arr[i] < min ? arr[i] : min;
	}

	return min;
}

int findMax(const int arr[], int size)
{
	int max = arr[0];

	for (size_t i = 1; i < size; i++)
	{
		max = arr[i] > max ? arr[i] : max;
	}

	return max;
}

double getAvg(const int arr[], int size)
{
	int sum = 0;

	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	return sum / (double)size;
}

int myAbs(int num)
{
	return num < 0 ? -num : num;
}

int findClosestToAvg(const int arr[], int size)
{
	double avg = getAvg(arr, size);

	int closest = arr[0];

	for (size_t i = 1; i < size; i++)
	{
		if (myAbs(myAbs(avg - closest) > myAbs(avg - arr[i])))
		{
			closest = arr[i];
		}
	}

	return closest;
}

int findMinMax(const int arr[], int size, int& minValue, int& maxValue)
{
	minValue = findMin(arr, size);
	maxValue = findMax(arr, size);

	return findClosestToAvg(arr, size);
}

int main()
{
	int arr[MAX_SIZE];

	size_t size;
	std::cin >> size;

	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}

	int min = -1, max = -1;

	int avg = findMinMax(arr, size, min, max);

	std::cout << min << " " << max << " " << avg << std::endl;
}