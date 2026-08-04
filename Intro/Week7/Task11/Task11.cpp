#include <iostream>

constexpr size_t MAX_SIZE = 50;

void printZigZag(const int matrix[][MAX_SIZE], size_t rows, size_t cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (i % 2 == 0) 
			{
				std::cout << matrix[i][j] << " ";
			}
			else
			{
				std::cout << matrix[i][cols - j - 1] << " ";
			}
		}

		std::cout << std::endl;
	}
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

	printZigZag(matrix, rows, cols);
}