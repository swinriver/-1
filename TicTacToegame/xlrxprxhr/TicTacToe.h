#include <iostream>
#include <string>
using namespace std;

class TicTacToe
{

public:
    TicTacToe();
    void printBoard();
    void input(int x,int y,int k);

    void GameWin(int i,int& j);

    void GameDraw(int k);
	
private:
    char board[3][3];

};
