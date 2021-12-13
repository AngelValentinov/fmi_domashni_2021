#include<iostream>
using namespace std;
const int maxSize = 100;
void readArray(int rows, int columns, int matrix[][maxSize])
{
	for (size_t i = 0; i < rows; ++i)
	{
		for (size_t j = 0; j < columns; ++j)
		{
			cin >> matrix[i][j];
		}
	}
}
void printMatrix(int rows, int columns, int matrix[][maxSize])
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < columns; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
bool isDust(int number)
{
	if (number != 0)
	{
		return true;
	}
	return false;
}
int sumUniqueElements(int rows, int cols, int matrix[][maxSize])
{
	int sumElements = matrix[0][0];
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (matrix[0][0] != matrix[i][j])
			{
				sumElements += matrix[i][j];
			}
		}
	}
	return sumElements;
}
bool isSameElements(int currentI, int currentY, int rows, int cols, int matrix[][maxSize])
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (currentI == i && currentY == j)
			{
				continue;
			}
			if (matrix[currentI][currentY] == matrix[i][j])
			{
				return true;
			}
		}
	}
	return false;
}
void mainDiagonal(int number, int adjustedI, int adjustedY, int currentI, int currentY, int rows, int cols, int matrix[][maxSize])
{
	for (size_t i = adjustedI; i < rows && i < cols; i++)
	{
		if (matrix[i + adjustedI][i + adjustedY] == number)
		{
			continue;
		}
		matrix[i + adjustedI][i + adjustedY] += number;
	}
}
void secondDiagonal(int number, int adjustedI, int adjustedY, int currentI, int currentY, int rows, int cols, int matrix[][maxSize])
{
	int j = adjustedY;
	for (int i = adjustedI; i <= adjustedY; i++)
	{
		if (matrix[i][j] == number)
		{
			j--;
			continue;
		}
		matrix[i][j] += number;
		j--;
	}
}
void adjustedStarPosMainDiag(int currentRow, int currentCol, int* adjustedStartX, int* adjustedStartY)
{
	*adjustedStartX = 0;
	*adjustedStartY = 0;
	// Above and on the main diagonal
	if (currentCol >= currentRow)
	{
		*adjustedStartX = 0;
		*adjustedStartY = currentCol - currentRow;
	}
	// Below the main diagonal
	else
	{
		*adjustedStartX = currentRow - currentCol;
		*adjustedStartY = 0;
	}
}
void adjustedStarPosSecDiag(int currentRow, int currentCol, int* adjustedStartX, int* adjustedStartY, int rows, int col)
{
	*adjustedStartX = 0;
	*adjustedStartY = 0;
	// Above and on the second diagonal
	if (currentRow <= rows - 1 - currentCol)
	{
		*adjustedStartX = 0;
		*adjustedStartY = currentCol + currentRow;
	}
	// Below the second diagonal
	else
	{
		*adjustedStartY = col;
		*adjustedStartX = currentRow;
	}
	if (*adjustedStartY >= col)
	{
		*adjustedStartY = col - 1;
	}
	if (*adjustedStartX > rows - 1)
	{
		*adjustedStartX = rows;
	}
}
void buildSnowflake(int rows, int columns, int matrix[][maxSize])
{
	int adjustedStartI = 0;
	int adjustedStartY = 0;
	int sumElements = sumUniqueElements(rows, columns, matrix);
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < columns; j++)
		{
			if (isDust(matrix[i][j]) && !isSameElements(i, j, rows, columns, matrix))
			{
				if (sumElements >= matrix[i][j])
				{
					adjustedStarPosMainDiag(i, j, &adjustedStartI, &adjustedStartY);
					mainDiagonal(matrix[i][j], adjustedStartI, adjustedStartY, i, j, rows, columns, matrix);
					adjustedStarPosSecDiag(i, j, &adjustedStartI, &adjustedStartY, rows, columns);
					secondDiagonal(matrix[i][j], adjustedStartI, adjustedStartY, i, j, rows, columns, matrix);
				}
			}
		}
	}
}
int main()
{
	int rows, columns;
	cin >> rows;
	cin >> columns;
	int matrix[maxSize][maxSize];
	readArray(rows, columns, matrix);
	buildSnowflake(rows, columns, matrix);
	cout << endl;
	printMatrix(rows, columns, matrix);
	return 0;
}
