#include <iostream>

constexpr size_t MAX_SIZE = 20;

void spiralPrint(const int matrix[][MAX_SIZE], size_t rows, size_t cols)
{
	int row = 0, col = 0;

	int colFloor = 0, colRoof = cols - 1, rowFloor = 1, rowRoof = rows - 1;

	char dir = 'r';

	for (size_t i = 0; i < rows * cols; i++)
	{
		std::cout << matrix[row][col] << " ";

		switch (dir)
		{
		case 'r':
			col++;
			if (col > colRoof)
			{
				dir = 'u';
				col = colRoof;
				colRoof--;
				row = rowFloor;
			}
			break;
		case 'u':
			row++;
			if (row > rowRoof)
			{
				dir = 'l';
				row = rowRoof;
				rowRoof--;
				col = colRoof;
			}
			break;
		case 'l':
			col--;
			if (col < colFloor)
			{
				dir = 'd';
				col = colFloor;
				colFloor++;
				row = rowRoof;
			}
			break;
		case 'd':
			row--;
			if (row < rowFloor)
			{
				dir = 'r';
				row = rowFloor;
				rowFloor++;
				col = colFloor;
			}
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

	spiralPrint(matrix, rows, cols);
}