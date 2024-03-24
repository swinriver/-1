#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
    char board[3][3];
    int x, y, k, i, j=0;

    for (x = 0; x < 3; x++)
        for (y = 0; y < 3; y++)
            board[x][y] = ' ';

    for (k = 0; k < 9; k++)
    {
        cout << "(x,y) 좌표 : ";
        cin >> x >> y;
        board[x][y] = (k % 2 == 0) ? 'X' : 'O';

        for (i = 0; i < 3; i++) {
            cout << "---|---|---|" << endl;
            cout << board[i][0] << "  |" << board[i][1] << "  | " << board[i][2] << endl;
        }
        cout << "---|---|---|" << endl;

        for (i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            {
                cout << board[i][0] << " 승리" << endl;
                j = 1;
            }
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            {
                cout << board[0][i] << " 승리" << endl;
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

        if (j == 1)
            break; 

        if (k == 8)
        {
            cout << "무승부" << endl;
        }
    }

    return 0;
}
