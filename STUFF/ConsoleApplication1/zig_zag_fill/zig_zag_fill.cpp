#include<iostream>
using namespace std;
const int maxSize = 15;

void printMatrix(int matrix[][maxSize], int row)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void fillRow(int arr[][maxSize], int& startRow, int& rowIndex, int& colIndex, int& lastColumn, int& number, int numberToFill)
{
    for (colIndex; colIndex < lastColumn; ++colIndex)
    {
        if (number <= numberToFill)
        { 
            arr[rowIndex][colIndex] = number++;
        }
    }
    --colIndex;
    --lastColumn;
    ++rowIndex;
    ++startRow;
}

void fillColumn(int arr[][maxSize], int& rowIndex, int& colIndex, int& lastRow, int& number, int numberToFill)
{
    for (rowIndex; rowIndex < lastRow; rowIndex++)
    {
        if (number <= numberToFill)
        { 
            arr[rowIndex][colIndex] = number++;
        }  
    }
    --rowIndex;
    --lastRow;
    --colIndex;
}

void fillRowBackwards(int arr[][maxSize],int& startCol, int& rowIndex, int& colIndex, int& lastRow, int& number, int numberToFill)
{
    for (colIndex; colIndex > startCol; colIndex--)
    {
        if (number <= numberToFill)
        {
           arr[rowIndex][colIndex] = number++;
        }
       
    }
    //--rowIndex;
    
}   

void fillColumnUpwards(int arr[][maxSize],int&startRow,int& startCol, int& rowIndex, int& colIndex, int& lastRow, int& number, int numberToFill)
{
    for (rowIndex; rowIndex >= startRow ; rowIndex--)
    {
        if (number <= numberToFill)
        {
            arr[rowIndex][colIndex] = number++;
        }
       
    }
    
    colIndex++;
    startCol++;
    rowIndex++;
}

void zigzagFill(int arr[][maxSize], int arraySize, int numberToFill)
{
    int rowIndex = 0;
    int colIndex = 0;
    int startRow = 0;
    int startColumn = 0;
    int lastColumn = 3;
    int lastRow = 3;
    int i = 1;
    while( i <= numberToFill)
    {
        fillRow(arr, startRow, rowIndex, colIndex, lastColumn, i, numberToFill);
        fillColumn(arr, rowIndex, colIndex, lastRow, i, numberToFill);
        fillRowBackwards(arr, startColumn, rowIndex, colIndex, lastRow, i, numberToFill);
        fillColumnUpwards(arr, startRow, startColumn, rowIndex, colIndex, lastRow, i, numberToFill);
          
    }



}


int main()
{


    int arr[maxSize][maxSize];
    zigzagFill(arr, 3, 9);
    printMatrix(arr, 3);
   
    

     return 0;
}