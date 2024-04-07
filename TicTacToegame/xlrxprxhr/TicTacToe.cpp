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
    while (1) {
        // 범위 확인
        if (x < 0 || x > 2 || y < 0 || y > 2) {
            cout << "잘못된 입력입니다. 좌표는 0부터 2까지 입력해주세요." << endl;
            // 다시 입력 받기
            cout << "(x,y) 좌표 : ";
            cin >> x >> y;
        }
        else if (board[x][y] != ' ') {
            cout << "이미 선택된 위치입니다. 다른 위치를 선택해주세요." << endl;
            // 다시 입력 받기
            cout << "(x,y) 좌표 : ";
            cin >> x >> y;
        }
        else {
            // 유효한 입력일 경우에만 반복문 나감
            break;
        }
    }
    // 유효한 좌표만 표시
    board[x][y] = (k % 2 == 0) ? 'X' : 'O';
}
void TicTacToe::GameWin(int i, int& j)
{
    //승리
    for (int row = 0; row < 3; row++)
    {
        if (board[row][0] == board[row][1] && board[row][1] == board[row][2] && board[row][0] != ' ')
        {
            cout << board[row][0] << " 승리" << endl;
            j = 1;
        }
    }

    for (int col = 0; col < 3; col++)
    {
        if (board[0][col] == board[1][col] && board[1][col] == board[2][col] && board[0][col] != ' ')
        {
            cout << board[0][col] << " 승리" << endl;
            j = 1;
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
    {
        cout << board[0][0] << " 승리" << endl;
        j = 1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
    {
        cout << board[0][2] << " 승리" << endl;
        j = 1;
    }
}
void TicTacToe::GameDraw(int k)
{
    if (k == 8)
    {
        cout << "무승부" << endl;
    }

}
