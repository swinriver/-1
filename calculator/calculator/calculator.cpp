#include "calculator.h"
#include <iostream>
#include <string>
using namespace std;
void calculator::menu(double x=0, double y=0, double sum=0, char oper='0')
{
	while(1)
	{
		switch (oper)
		{
		case '+':
			add(x, y, oper, sum);
			break;
		case '-':
			sub(x, y, oper, sum);
			break;
		case '*':
			mul(x, y, oper, sum);
			break;
		case '/':
			di(x, y, oper, sum);
			break;
		case 'C':
			C(x, y, sum);
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

void calculator::add(double x, double y,char oper, double sum)
{
	cout << x << oper << y << " = " << x + y << endl;
	sum = x + y;
}
void calculator::sub(double x, double y,char oper, double sum)
{
	cout << x << oper << y << " = " << x - y << endl;
	sum = x - y;
}

void calculator::mul(double x, double y,char oper, double sum)
{
	cout << x << oper << y << " = " << x * y << endl;
	sum = x * y;
}

void calculator::di(double x, double y,char oper, double sum)
{
	cout << x << oper << y << " = " << x / y << endl;
	sum =x / y;
}
 
void calculator::C(double x, double y,double sum)
{
	x = 0, y = 0 ,sum=0;
}