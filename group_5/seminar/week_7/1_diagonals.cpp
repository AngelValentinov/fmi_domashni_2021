#include<iostream>
using namespace std;

const int maxSize = 32;

void readArray(unsigned arraySize, int arr[][maxSize])
{

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            cin >> arr[i][j];
        }
    }
}

int sumMainDiagonal(unsigned arraySize, int arr[][maxSize])
{

    int sum =0;
    for (int i = 0, j = 0; i < arraySize; i++,j++)
    {
        sum+=arr[i][j];
    }
    return sum;
}

int sumSecondaryDiagonal(unsigned arraySize, int arr[maxSize][maxSize])
{
    int sum = 0;

    for (int i = 0 , j=arraySize-1;  j>=0; i++,j--)
    {
        sum+=arr[i][j];
    }
    return sum;
}

int main()
{

    unsigned number;
    cin>> number;

    int arr[maxSize][maxSize];
    readArray(number,arr);

    cout << "First diagonal"  << " - "<< sumMainDiagonal(number,arr)<< endl;
    cout << "Second diagonal"  << " - " <sumSecondaryDiagonal(number,arr)<< endl;

    return 0;
}
