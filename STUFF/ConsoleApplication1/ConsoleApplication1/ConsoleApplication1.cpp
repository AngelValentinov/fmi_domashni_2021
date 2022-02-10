#include<iostream>
using namespace std;
const int maxSize = 15;
void readArray(int rows, int columns, int matrix[][maxSize])
{
    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; j < columns; ++j)
        {
            cin >> matrix[i][j];
        }
    }
}
void printMatrix(int rows, int columns, int matrix[][maxSize])
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool isDust(int number)
{
    if (number != 0)
    {
        return true;
    }
    return false;
}

void staringMainCoordinates(int& row, int& col, int columns)
{
    while (row > 0 && col > 0)
    {
        --row;
        --col;
    }
}
void staringSecCoordinates(int& row, int& col, int columns)
{
    while (row > 0 && col < columns - 1)
    {
        ++col;
        --row;
    }
}

void buildMainDiagonal(int startRow, int startCol, int curRow, int curCol, int array[][maxSize], int columns, int number)
{
    while (startCol < columns && startRow < columns)
    {
        if ((markedMatrix[startRow][startCol] == 1 && isDust(array[startRow][startCol])))
        {
            ++startCol;
            ++startRow;
            continue;
        }
        markedMatrix[startRow][startCol] = 1;
        array[startRow][startCol] += number;
       
        ++startCol;
        ++startRow;
    }
}
void buildSecDiagonal(int startRow, int startCol, int curRow, int curCol, int array[][maxSize], int columns, int number)
{
    while (startCol > 1 && startRow < columns - 1)
    {

        // HERE is the porblem
        if (isDust(array[startRow][startCol]))
        {
            --startCol;

            ++startRow;
            continue;
        }
        
        array[startRow][startCol] += number;

        --startCol;
        ++startRow;
    }
}
void buildSnowflake(int matrix[][maxSize], int rows, int columns)
{
    int startingRow = 0, startingCol = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            
            if (isDust(matrix[i][j]))
            {
                startingRow = i;
                startingCol = j;
                
                staringMainCoordinates(startingRow,startingCol,columns);
                buildMainDiagonal(startingRow, startingCol, i, j, matrix, columns, matrix[i][j]);
                startingRow = i;
                startingCol = j;
                staringSecCoordinates(startingRow, startingCol, columns);
                buildSecDiagonal(startingRow, startingCol, i, j, matrix, columns, matrix[i][j]);
                // printMatrix(rows, columns, matrix);
            }
           // printMatrix(rows, columns, markedMatrix);
        }
    }



}


int main()
{


    int rows, columns;
    cin >> rows;
    cin >> columns;
    int matrix[maxSize][maxSize];
    readArray(rows, columns, matrix);
    buildSnowflake(matrix,rows,columns);
    printMatrix(rows, columns, matrix);


    return 0;
}