#include <iostream>

constexpr size_t MAX_SIZE = 50;

bool isMagicSquare(const int matrix[][MAX_SIZE], size_t size)
{
	int baseSum = 0;
	int mainDiagSum = 0;
	int secondDiagSum = 0;
	for (size_t i = 0; i < size; i++)
	{
		int sumRow = 0;
		int sumCol = 0;
		for (size_t j = 0; j < size; j++)
		{
			if (i == 0)
			{
				baseSum += matrix[i][j];
			}
			
			sumRow += matrix[i][j];
			sumCol += matrix[j][i];

			if (i == j)
			{
				mainDiagSum += matrix[i][j];
			}

			if (j == size - i - 1)
			{
				secondDiagSum += matrix[i][j];
			}
		}

		if (sumRow != baseSum || sumCol != baseSum)
		{
			return false;
		}
	}

	if (mainDiagSum != baseSum || secondDiagSum != baseSum)
	{
		return false;
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

	std::cout << std::boolalpha << isMagicSquare(matrix, size) << std::endl;
}