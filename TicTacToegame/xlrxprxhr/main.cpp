#include <iostream>
#include <string>
#include "TicTacToe.h"
using namespace std;

int main()
{
    TicTacToe game;
    int x, y, k, i = 0, j = 0;
    //���ʱ�ȭ

    for (k = 0; k < 9; k++)
    {
        //�Է� �ޱ�
        cout << "(x,y) ��ǥ : ";
        cin >> x >> y;
        //���� ���ϱ�
        game.input(x, y, k);
        //�� �����
        game.printBoard();
        //�¸�  gamewin();
        game.GameWin(i, j);
        if (j == 1)
            break;
        //���º�
        game.GameDraw(k);

    }
    return 0;
}

    /*
    for (k = 0; k < 9; k++)
    { 
        //�Է� �ޱ�
        cout << "(x,y) ��ǥ : ";
        cin >> x >> y;

       //���� ���ϱ�
       board[x][y] = (k % 2 == 0) ? 'X' : 'O';

       //�� �����
        for (i = 0; i < 3; i++) {
            cout << "---|---|---|" << endl;
            cout << board[i][0] << "  |" << board[i][1] << "  | " << board[i][2] << endl;
        }
        cout << "---|---|---|" << endl;


        //�¸�
        for (i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            {
                cout << board[i][0] << " �¸�" << endl;
                j = 1;
            }
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            {
                cout << board[0][i] << " �¸�" << endl;
                j = 1;
            }
        }

        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        {
            cout << board[0][0] << " �¸�" << endl;
            j = 1;
        }
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        {
            cout << board[0][2] << " �¸�" << endl;
            j = 1;
        }
        if (j == 1)
            break;

        //���º�
        if (k == 8)
        {
            cout << "���º�" << endl;
        }
    }
    */
 