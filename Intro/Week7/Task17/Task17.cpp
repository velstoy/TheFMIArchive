#include <iostream>

constexpr size_t MAX_SIZE = 20;

void multiplyMatrices(const int matrix1[][MAX_SIZE], size_t rows1, size_t cols1, const int matrix2[][MAX_SIZE], size_t rows2, size_t cols2, int out[][MAX_SIZE], size_t& outRows, size_t& outCols)
{
	if (cols1 != rows2)
	{
		return;
	}

	outRows = rows1;
	outCols = cols2;

	for (size_t i = 0; i < outRows; i++)
	{
		for (size_t j = 0; j < outCols; j++)
		{
			int sum = 0;

			for (size_t k = 0; k < cols1; k++)
			{
				sum += matrix1[i][k] * matrix2[k][j];
			}

			out[i][j] = sum;
		}
	}
}

int main()
{
	size_t rows1, cols1;
	std::cin >> rows1 >> cols1;

	int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE];

	for (size_t i = 0; i < rows1; i++)
	{
		for (size_t j = 0; j < cols1; j++)
		{
			std::cin >> matrix1[i][j];
		}
	}

	size_t rows2, cols2;
	std::cin >> rows2 >> cols2;

	for (size_t i = 0; i < rows2; i++)
	{
		for (size_t j = 0; j < cols2; j++)
		{
			std::cin >> matrix2[i][j];
		}
	}

	int out[MAX_SIZE][MAX_SIZE];

	size_t outRows = 0, outCols = 0;

	multiplyMatrices(matrix1, rows1, cols1, matrix2, rows2, cols2, out, outRows, outCols);

	for (size_t i = 0; i < outRows; i++)
	{
		for (size_t j = 0; j < outCols; j++)
		{
			std::cout << out[i][j] << " ";
		}

		std::cout << std::endl;
	}
}