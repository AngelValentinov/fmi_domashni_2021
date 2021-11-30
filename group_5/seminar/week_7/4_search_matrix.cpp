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

void searchMatrix(int number, int arraySize, int array[][maxSize])
{
    bool flag = false;
    int counter = 0;
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            if(number == array[i][j])
            {
                if(counter == 0)
                {
                    cout << "Positions - ";
                    counter++;
                }
                cout <<"("<< i <<","<<j << ")";
                flag = true;
            }
        }
    }
    if(flag == false)
    {
        cout << "Element not found anywhere";
    };
}

int main()
{

    int numberToSearch;
    cout << "Enter number to search: ";
    cin >>numberToSearch;

    cout << "Enter the size of the array: ";
    int numberArray;
    cin >> numberArray;

    int array[maxSize][maxSize];

    readArray(numberArray,array);

    searchMatrix(numberToSearch, numberArray, array);



    return 0;
}
