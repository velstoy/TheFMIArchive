#include <iostream>

constexpr size_t MAX_SIZE = 20;

void multiplyMatrixByNum(const int matrix1[][MAX_SIZE], size_t rows, size_t cols, int num, int out[][MAX_SIZE])
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			out[i][j] = matrix1[i][j] * num;
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

	int num;
	std::cin >> num;

	int out[MAX_SIZE][MAX_SIZE];

	multiplyMatrixByNum(matrix1, rows, cols, num, out);

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << out[i][j] << " ";
		}

		std::cout << std::endl;
	}
}