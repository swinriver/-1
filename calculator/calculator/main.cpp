#include <iostream>
#include <string>
#include "calculator.h"
using namespace std;

int main()
{
	double x, y, sum;
	char oper;
	while (1)
	{
		cout << "+" << endl;
		cout << "-" << endl;
		cout << "*" << endl;
		cout << "/" << endl;
		cout << "C입력시 초기화" << endl;
		cout << "Q입력시 종료" << endl;
		cout << "연산자를 고르시오" << endl;
		cin >> oper;
		if (oper == 'Q')
			break;
		if (sum != 0)
		{
			cout << sum << endl;
			cout << "y의 값을 입력하시오" << endl;
			cin >> y;
			x = sum;
		}
		if (sum == 0)
		{
			cout << "x의 값을 입력하시오" << endl;
			cin >> x;
			cout << "y의 값을 입력하시오" << endl;
			cin >> y;
		}
		calculator.menu(x,y,sum,,oper);
	}
}