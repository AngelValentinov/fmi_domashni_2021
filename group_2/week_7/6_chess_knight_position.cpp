#include<iostream>
using namespace std;

void readArray(bool board[CHESSSIZE][CHESSSIZE])
{
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            cin >> board[i][j];
        }
    }
}

unsigned availablePositions(unsigned row, unsigned col, bool board[CHESSSIZE][CHESSSIZE])
{
    bool isEmpty = board[row][ver];

    unsigned availablePosition = 0;

    if(isValidChessCoordinates(row + 2 , col - 1 ) && (board[row + 2][col - 1] == 1)
    {
        availablePosition++;
    }
    if(isValidChessCoordinates(row + 2, col + 1) && (board[row + 2][col + 1] == 1))
    {
        availablePosition++;
    }
    if(isValidChessCoordinates(row - 2, col - 1) && (board[row - 2][col - 1] == 1))
    {
        availablePosition++;
    }
    if(isValidChessCoordinates(row - 2, col + 1) && (board[row - 2][col + 1] == 1))
    {
        availablePosition++;
    }
    if(isValidChessCoordinates(row + 1, col + 1) && (board[row + 1][col + 1] == 1))
    {
        availablePosition++;
    }
    if(isValidChessCoordinates(row + 1, col - 1) && (board[row + 1][col - 1] == 1))
    {
        availablePosition++;
    }
    if(isValidChessCoordinates(row - 1, col - 1) && (board[row - 1][col - 1] == 1))
    {
        availablePosition++;
    }
    if(isValidChessCoordinates(row - 1, col + 1) && (board[row - 1][col + 1] == 1))
    {
        availablePosition++;
    }

return availablePosition;
}

int main()
{

    bool board[8][8];
    readArray(board);

    unsigned horizontalCordinates, verticalCordinates;
    do
    {
        cout << "Please enter cordinates for the knights: ";
        cin >> horizontalCordinates >> verticalCordinates;
    }
    while (horizontalCordinates > 8 && horizontalCordinates < 0 || verticalCordinates > 8 && verticalCordinates < 0);


    cout << "There are " << availablePositions(horizontalCordinates,verticalCordinates,board); << " possible moves.";*/
    return 0;
}