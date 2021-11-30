#include<iostream>
using namespace std;

const int maxSize = 32;

void readArray(unsigned arraySize, int array[][maxSize])
{

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            cin >> array[i][j];
        }
    }
}


void printArray(unsigned arraySize, int array[][maxSize])
{
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            cout << array[i][j] << " ";
        }
    }
}


void makeNegative(unsigned arraySize, int array[][maxSize])
{
   for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            array[i][j] = -array[i][j];
        }
    }
}

void FindArrayC(unsigned arraySize, int arrayA[][maxSize], int arrayB[][maxSize], int arrayC[][maxSize])
{
    makeNegative(arraySize,arrayA);

    for (int i = 0; i < arraySize; i++)
    {
       for (int j = 0; j < arraySize; j++)
        {
            arrayC[i][j] = (2 * arrayA[i][j]) + (3 * arrayB[i][j]);
        }
    }
}

int main()
{
    unsigned arraySize;
    cin >> arraySize;

    int arrayA[maxSize][maxSize];
    int arrayB[maxSize][maxSize];

    readArray(arraySize,arrayA);
    readArray(arraySize,arrayB);

    makeNegative(arraySize, arrayA);
    cout << "-(A): ";
    printArray(arraySize, arrayA);
    cout << endl;

    int arrayC[maxSize][maxSize];
    FindArrayC(arraySize,arrayA,arrayB,arrayC);
    cout << "(C) = 2(A)+3(B) : ";
    printArray(arraySize, arrayC);

    return 0;
}
