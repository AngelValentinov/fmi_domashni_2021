#include<iostream>
using namespace std;

const int maxSize = 32;

void readArray (unsigned numberRows,unsigned numberColumns, int array[][maxSize])
{
    for (int i = 0; i < numberRows; i++)
    {
        for (int j = 0; j < numberColumns; j++)
        {
            cin >> array[i][j];
        }
    }
}


int minElement(unsigned arrayRows,unsigned arrayColumns, int array[][maxSize])
{
    int min = array[0][0];

    for (int i = 0; i < arrayRows; i++)
    {
        for (int j = 0; j < arrayColumns; j++)
        {
            if(min > array[i][j])
            {
                min = array[i][j];
            }
        }
    }
    return min;
}
int maxElement(unsigned arrayRows,unsigned arrayColumns, int array[][maxSize])
{
    int max = array[0][0];
    for (int i = 0; i < arrayRows; i++)
    {
        for (int j = 0; j < arrayColumns; j++)
        {
            if(max < array[i][j])
            {
                max = array[i][j];
            }
        }
    }
    return max;
}

int main()
{
    unsigned numberColumns;
    unsigned numberRows;
    cin >> numberColumns;
    cin>> numberRows;

    int array[maxSize][maxSize];
    readArray(numberRows,numberColumns,array);

    cout << "The maximum element is: " << maxElement(numberRows,numberColumns,array) << endl;
    cout << "The minimum element is: " << minElement(numberRows,numberColumns,array) << endl;
    return 0;

}
