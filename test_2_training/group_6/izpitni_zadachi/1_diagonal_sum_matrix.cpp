#include<iostream>
using namespace std;
const int maxSize = 33;

void readArray(unsigned number, int matrix[][maxSize])
{
	for (int i = 0; i < number; ++i)
	{
		for (int j = 0; j < number; ++j)
		{
			cin >> matrix[i][j];
		}
	}
}

bool areConditionsMet(unsigned number, int matrix[][maxSize])
{
	int sumOne = 0, sumTwo = 0, sumThree = 0, sumFour = 0;
	int half = number / 2;
	for (int i = 0; i < half; ++i)
	{
		sumOne += matrix[i][i];
	}
	for (int i = half + 1; i < number; ++i)
	{
		sumTwo += matrix[i - half - 1][i];
	}
	for (int i = half + 1; i < number; ++i)
	{
		sumThree += matrix[i][i - half - 1];
	}
	for (int i = half + 1; i < number; ++i)
	{
		sumFour += matrix[i][i];
	}
	if ((sumOne == sumTwo) == (sumThree == sumFour))
	{
		return true;
	}
	return false;
}
int main()
{
	unsigned number;
	cin >> number;
	if (number <= 3 || number % 2 == 0)
	{
		cerr << "That's an invalid input.";
		return 1;
	}
	int matrix[maxSize][maxSize];
	readArray(number, matrix);
	areConditionsMet(number, matrix) ? cout << "True" : cout << "False";
	return 0;
}