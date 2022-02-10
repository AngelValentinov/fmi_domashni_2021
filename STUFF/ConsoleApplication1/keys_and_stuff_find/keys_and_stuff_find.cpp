#include <iostream>
using namespace std;
const int maxSize = 15;
void readArray(int matrix[][maxSize], int rows, int cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cin >> matrix[i][j];
		}
	}
}
void printMatrix(int matrix[][maxSize], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void findItemPos(int arr[][maxSize], int rows, int cols, int* itemsPositions)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] == 1)
			{
				itemsPositions[0] = i;
				itemsPositions[1] = j;
			}
			if (arr[i][j] == 2)
			{
				itemsPositions[2] = i;
				itemsPositions[3] = j;
			}
			if (arr[i][j] == 3)
			{
				itemsPositions[4] = i;
				itemsPositions[5] = j;
			}
		}
	}
}

void findPathToItem(int arr[][maxSize], int rows, int cols, int& startRow, int& startCol, int itemRow, int itemCol)
{
	while (startCol != itemCol)
	{
		if (startCol > itemCol)
		{
			startCol--;
		}
		if (startCol < itemCol)
		{
			startCol++;
		}
		cout << startRow << "," << startCol << endl;
	}
	while (startRow != itemRow)
	{

		//TODO: Make the row equal
		if (startRow > itemRow)
		{
			startRow--;
		}
		if (startRow < itemRow)
		{
			startRow++;
		}
		cout << startRow << "," << startCol << endl;
	}
}

void findItems(int arr[][maxSize], int rows, int cols, int& startRow, int& startCol, int* itemsPositions)
{
	findItemPos(arr, rows, cols, itemsPositions);

	// The initial printing of the position
	cout << startRow << "," << startCol << endl;
	findPathToItem(arr, rows, cols, startRow, startCol, itemsPositions[0], itemsPositions[1]);
	findPathToItem(arr, rows, cols, startRow, startCol, itemsPositions[2], itemsPositions[3]);
	findPathToItem(arr, rows, cols, startRow, startCol, itemsPositions[4], itemsPositions[5]);
}

int main()
{
	int arr[maxSize][maxSize];
	int rows, cols;
	cin >> rows >> cols;

	readArray(arr,rows,cols);
	int startRow, startCol;
	// Why the input does not brake when we write ',' LOL
	cin >> startRow >> startCol;

	// Since there are 6 variables I will make an array with them instead of using them in every function
	int itemsPositions[6];

	findItems(arr, rows, cols, startRow, startCol, itemsPositions);
}