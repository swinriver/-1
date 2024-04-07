#include <iostream>
#include <string>
#include "TicTacToe.h"

using namespace std;

TicTacToe::TicTacToe()
{
    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            board[x][y] = ' ';
}

void TicTacToe::printBoard()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "---|---|---|" << endl;
        cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << " |" << endl;
    }
    cout << "---|---|---|" << endl;
}
void TicTacToe::input(int x, int y, int k)
{
    //¼ø¼­ Á¤ÇÏ±â
    board[x][y] = (k % 2 == 0) ? 'X' : 'O';
}
void TicTacToe::GameWin(int i, int& j)
{
    //½Â¸®
    for (int row = 0; row < 3; row++)
    {
        if (board[row][0] == board[row][1] && board[row][1] == board[row][2] && board[row][0] != ' ')
        {
            cout << board[row][0] << " ½Â¸®" << endl;
            j = 1;
        }
    }

    for (int col = 0; col < 3; col++)
    {
        if (board[0][col] == board[1][col] && board[1][col] == board[2][col] && board[0][col] != ' ')
        {
            cout << board[0][col] << " ½Â¸®" << endl;
            j = 1;
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
    {
        cout << board[0][0] << " ½Â¸®" << endl;
        j = 1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
    {
        cout << board[0][2] << " ½Â¸®" << endl;
        j = 1;
    }
}
void TicTacToe::GameDraw(int k)
{
    if (k == 8)
    {
        cout << "¹«½ÂºÎ" << endl;
    }

}
