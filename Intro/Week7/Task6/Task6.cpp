#include <iostream>

constexpr size_t SIZE = 20;

void outTimesFound(const int arr[])
{
	int dict[SIZE]{ 0 };

	for (size_t i = 0; i < SIZE; i++)
	{
		dict[arr[i]]++;
	}

	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << i << ": " << dict[i] << std::endl;
	}
}

int main()
{
	int arr[SIZE];

	for (size_t i = 0; i < SIZE; i++)
	{
		std::cin >> arr[i];
	}
	
	outTimesFound(arr);
}