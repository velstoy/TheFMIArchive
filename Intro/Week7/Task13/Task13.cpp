#include <iostream>

constexpr size_t MAX_SIZE = 50;

void getTransposed(const int matrix[][MAX_SIZE], size_t size, int out[][MAX_SIZE])
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			out[i][j] = matrix[j][i];
		}
	}
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

	int out[MAX_SIZE][MAX_SIZE];

	getTransposed(matrix, size, out);

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			std::cout << out[i][j] << " ";
		}

		std::cout << std::endl;
	}
}