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
		cout << "C�Է½� �ʱ�ȭ" << endl;
		cout << "Q�Է½� ����" << endl;
		cout << "�����ڸ� ���ÿ�" << endl;
		cin >> oper;
		if (oper == 'Q')
			break;
		if (sum != 0)
		{
			cout << sum << endl;
			cout << "y�� ���� �Է��Ͻÿ�" << endl;
			cin >> y;
			x = sum;
		}
		if (sum == 0)
		{
			cout << "x�� ���� �Է��Ͻÿ�" << endl;
			cin >> x;
			cout << "y�� ���� �Է��Ͻÿ�" << endl;
			cin >> y;
		}
		calculator.menu(x,y,sum,,oper);
	}
}