#include <iostream>

constexpr size_t MAX_SIZE = 100;

int myMin(int a, int b)
{
	return a < b ? a : b;
}

int findMin(const int matrix[][MAX_SIZE], size_t rows, size_t cols)
{
	int min = matrix[0][0];

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			min = myMin(matrix[i][j], min);
		}
	}

	return min;
}

int main()
{
	size_t rows, cols;
	std::cin >> rows >> cols;

	int matrix[MAX_SIZE][MAX_SIZE];

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	std::cout << findMin(matrix, rows, cols) << std::endl;
}