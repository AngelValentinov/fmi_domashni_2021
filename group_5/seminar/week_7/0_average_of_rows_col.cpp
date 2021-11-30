#include<iostream>
using namespace std;

const int maxSize = 16;


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

double sumRow(int arraySize,int currentRow,int array[][maxSize])
{

    double sum = 0;
    for (int i = 0; i < arraySize; i++)
    {
        sum += array[currentRow][i];
    }
    return sum/arraySize;
}

double sumColumn(int arraySize,int currentColumn,int array[][maxSize])
{

    double sum = 0;
    for (int i = 0; i < arraySize; i++)
    {
        sum += array[i][currentColumn];
    }
    return sum/arraySize;
}

void printRowsColumns(int arraySize, int array[][maxSize])
{

    for (int i = 0; i < arraySize; i++)
    {
        cout << i+1 << " row - "<<sumRow(arraySize,i,array)<< endl;
    }
    for (int i = 0; i < arraySize; i++)
    {
        cout << i+1 << " col - "<<sumColumn(arraySize,i,array) << endl;
    }

}

int main()
{

    int number;
    cin >> number;

    int arr[maxSize][maxSize];
    readArray(number,arr);

    printRowsColumns(number, arr);




    return 0;
}
