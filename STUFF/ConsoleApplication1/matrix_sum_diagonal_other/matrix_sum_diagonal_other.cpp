#include <iostream>
using namespace std;
const int maxSize = 15;
void printMatrix(int arr[][maxSize], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void changeMatrix(int arr[][maxSize], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i][i] = i;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i < j)
			{
				arr[i][j] = j - i;
			}
		}
	}
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i > j)
			{
				arr[i][j] = j * i;
			}
		}
	}
}
int main()
{
	int arr[maxSize][maxSize];
	int size;
	cin >> size;
	changeMatrix(arr, size);
	printMatrix(arr, size);
}
