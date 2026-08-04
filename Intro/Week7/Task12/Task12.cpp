#include<iostream>

constexpr size_t MAX_SIZE = 50;

bool isTriangular(const int matrix[][MAX_SIZE], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (j < i && matrix[i][j] != 0) {
				return false;
			}
		}
	}

	return true;
}

int main()
{
	size_t size;
	std::cin >> size;

	int matrix[MAX_SIZE][MAX_SIZE];

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	std::cout << std::boolalpha << isTriangular(matrix, size);
}