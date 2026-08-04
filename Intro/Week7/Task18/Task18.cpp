#include <iostream>

constexpr size_t MAX_SIZE = 20;

void flip90(const int matrix[][MAX_SIZE], size_t rows, size_t cols, int out[][MAX_SIZE], size_t& outRows, size_t& outCols)
{
	outRows = cols;
	outCols = rows;

	for (size_t i = 0; i < outRows; i++)
	{
		for (size_t j = 0; j < outCols; j++)
		{
			out[i][j] = matrix[rows - j - 1][i];
		}
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

	int out[MAX_SIZE][MAX_SIZE];

	size_t outRows, outCols;

	flip90(matrix, rows, cols, out, outRows, outCols);

	for (size_t i = 0; i < outRows; i++)
	{
		for (size_t j = 0; j < outCols; j++)
		{
			std::cout << out[i][j] << " ";
		}

		std::cout << std::endl;
	}
}