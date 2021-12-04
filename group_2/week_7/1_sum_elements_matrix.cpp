#include<iostream>
using namespace std;

const int maxSize = 32;

void readMatrix(unsigned number, int matrix[][maxSize])
{

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            cin >> matrix[i][j];
        }
    }

}

int sumElements(unsigned number, int matrix[][maxSize])
{
    int sum = 0;
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main()
{

    unsigned number;
    cin >> number;

    int matrix[maxSize][maxSize];
    readMatrix(number,matrix);

    double average = sumElements(number,matrix) / (number*number);
    cout << "Sum of the matrix elements: " << sumElements(number,matrix) << ", the average of the elements is: " << average;

    return 0;
}
