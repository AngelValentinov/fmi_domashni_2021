#include<iostream>
using namespace std;

const int maxSize = 32;


void readArray(int arraySize, int array[][maxSize])
{
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            cin >> array[i][j];
        }
    }
}
void printArray(int arraySize, int array[][maxSize])
{

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            cout << array[i][j];
        }
    }

}

int sumAboveDiagonal(int arraySize, int array[][maxSize])
{
    int sum = 0;

    for (int i = 0; i < arraySize ; i++)
    {
        for (int j = i+1; (j < i + 2) && (j < arraySize); j++)
        {
            sum += array[i][j];

        }
    }
    return sum;
}
int sumBelowDiagonal(int arraySize, int array[][maxSize])
{
    int sum = 0;
    for (int i = 1; i < arraySize; i++)
    {
        for (int j = i-1; j < i; j++)
        {
            sum+=array[i][j];
        }
    }

    return sum;
}

int main()
{

    int number;
    cin>>number;

    while (number < 0 || number > maxSize);

    int arr[number][maxSize];
    readArray(number, arr);

    cout <<"Above diagonal - "<< sumAboveDiagonal(number, arr)<<endl;
    cout <<"Below diagonal - "<< sumBelowDiagonal(number, arr)<<endl;


    return 0;
}
