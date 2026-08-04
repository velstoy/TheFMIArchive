#include <iostream>

constexpr size_t MAX_SIZE = 20;

void sumMatrices(const int matrix1[][MAX_SIZE], const int matrix2[][MAX_SIZE], size_t rows, size_t cols, int out[][MAX_SIZE])
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			out[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
}

int main()
{
	size_t rows, cols;
	std::cin >> rows >> cols;

	int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE];

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> matrix1[i][j];
		}
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> matrix2[i][j];
		}
	}

	int out[MAX_SIZE][MAX_SIZE];

	sumMatrices(matrix1, matrix2, rows, cols, out);

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << out[i][j] << " ";
		}

		std::cout << std::endl;
	}
}