#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
	char  board[3][3];
	int x, y, k, i, j;
	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++) board[x][y] = '  ';

	for (k = 0; k < 9; k++)
	{
		cout << "(x,y) ÁÂÇ¥ : ";
		cin >> x >> y;
		board[x][y] = (k % 2 == 0) ? 'X' : 'O';
		//0 x|1 o|2 x|3 o|4 x|5 o|6 x|7 o| 8 x|
		for (i = 0; i < 3; i++) {
			cout << "---|---|---|" << endl;
			cout << board[i][0] << "  |" << board[i][1] << "  | " << board[i][2] << endl;
		}
		cout << "---|---|---|" << endl;
		for (j = 0; j < 3; j++)
		{
			if (board[j][0] == board[j][1] && board[j][1] == board[j][2] && board[j][0] != '  ') //0 1 2, 3 4 5, 6 7 8 3°¡Áö
			{
				cout << board[j][0] << "½Â¸®" << endl;
				break;
			}
			if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != '  ')//0 3 6, 1 4 7, 2 5 8 3°¡Áö
			{
				cout << board[0][j] << "½Â¸®" << endl;
				break;
			}
			if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '  ')// 0 4 8 1°¡Áö
			{
				cout << board[0][0] << "½Â¸®" << endl;
				break;
			}
			if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '  ') //2 4 6 1°¡Áö
			{
				cout << board[0][2] << "½Â¸®" << endl;
				break;
			}
			break;
		}
		if (k == 8)
		{
			cout << "¹«½ÂºÎ" << endl;
		}
	}

	/*0 1 2  ->  012 048 036 147 258 345 678 246
	3 4 5     if [0][0],[0][1],[0][3]>>'X'||'O' -> braek printf("X½Â || O½Â");
	6 7 8		IF [0][0],[1][1],[2][2]
	 */
	return 0;
}