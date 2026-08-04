#include <iostream>

constexpr size_t MAX_SIZE = 50;

void printMainDiagonal(const int matrix[][MAX_SIZE], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (i == j)
			{
				std::cout << matrix[i][j] << " ";
			}
		}
	}

	std::cout << std::endl;
}

void printSecondaryDiagonal(const int matrix[][MAX_SIZE], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (j == size - i - 1) 
			{
				std::cout << matrix[i][j] << " ";
			}
		}
	}

	std::cout << std::endl;
}

int main()
{
	size_t n;
	std::cin >> n;

	int matrix[MAX_SIZE][MAX_SIZE];

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	printMainDiagonal(matrix, n);
	printSecondaryDiagonal(matrix, n);
}