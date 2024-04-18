#include "calculator.h"
#include <iostream>
#include <string>
using namespace std;
void calculator::menu()
{
	while(1)
	{
		sum = 0;
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

		
		switch (oper)
		{
		case '+':
			add();
			break;
		case '-':
			sub();
			break;
		case '*':
			mul();
			break;
		case '/':
			di();
			break;
		case 'C':
			C();
			break;
		case 'Q':
			break;
		default:
		{
			cout << "연산자를 다시 고르시오" << endl;
			continue;
		}
		}

	}
}

void calculator::add()
{
	cout << x << oper << y << " = " << x + y << endl;
	sum = x + y;
}
void calculator::sub()
{
	cout << x << oper << y << " = " << x - y << endl;
	sum = x - y;
}

void calculator::mul()
{
	cout << x << oper << y << " = " << x * y << endl;
	sum = x * y;
}

void calculator::di()
{
	cout << x << oper << y << " = " << x / y << endl;
	sum =x / y;
}
 
void calculator::C()
{
	x = 0, y = 0 ,sum=0;
}
