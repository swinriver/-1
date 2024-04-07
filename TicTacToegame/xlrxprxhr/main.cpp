#include <iostream>
#include <string>
#include "TicTacToe.h"
using namespace std;

int main()
{
    TicTacToe game;
    int x, y, k, i = 0, j = 0;
    //ÆÇÃÊ±âÈ­

    for (k = 0; k < 9; k++)
    {
        //ÀÔ·Â ¹Þ±â
        cout << "(x,y) ÁÂÇ¥ : ";
        cin >> x >> y;
        //¼ø¼­ Á¤ÇÏ±â
        game.input(x, y, k);
        //ÆÇ ¸¸µé±â
        game.printBoard();
        //½Â¸®  gamewin();
        game.GameWin(i, j);
        if (j == 1)
            break;
        //¹«½ÂºÎ
        game.GameDraw(k);

    }
    return 0;
}

    /*
    for (k = 0; k < 9; k++)
    { 
        //ÀÔ·Â ¹Þ±â
        cout << "(x,y) ÁÂÇ¥ : ";
        cin >> x >> y;

       //¼ø¼­ Á¤ÇÏ±â
       board[x][y] = (k % 2 == 0) ? 'X' : 'O';

       //ÆÇ ¸¸µé±â
        for (i = 0; i < 3; i++) {
            cout << "---|---|---|" << endl;
            cout << board[i][0] << "  |" << board[i][1] << "  | " << board[i][2] << endl;
        }
        cout << "---|---|---|" << endl;


        //½Â¸®
        for (i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            {
                cout << board[i][0] << " ½Â¸®" << endl;
                j = 1;
            }
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            {
                cout << board[0][i] << " ½Â¸®" << endl;
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
        if (j == 1)
            break;

        //¹«½ÂºÎ
        if (k == 8)
        {
            cout << "¹«½ÂºÎ" << endl;
        }
    }
    */
 