#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{

	//���� ����
	srand(time(NULL));
	int a[5];

	//5�� ���� ���� �����
	for (int i = 0; i < 5; i++) {
		a[i] = rand() % 50 + 1;
	}

	//���� �� ���
	cout << "���� ���� �� �Է�" << endl;
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a[i]);
	}
	cout << endl;

	//���� ����
	for (int i = 0; i < 5; i++)
	{
		int n = i;
		for (int j = i + 1; j < 5; j++)
		{
			if (a[j] < a[n])
			{
				n = j;
			}
		}
		if (n != i)
		{
			for (int j = 0; j < 5; j++)
			{
				int temp = a[i];
				a[i] = a[n];
				a[n] = temp;
			}
		}
	}
	//���� �� ���
	cout << "���� ���� �� �Է�" << endl;
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a[i]);
	}
	cout << endl;
	//���� ����

	//5�� ���� ���� �����
	for (int i = 0; i < 5; i++) {
		a[i] = rand() % 50 + 1;
	}

	//���� �� ���
	cout << "���� ���� �� �Է�" << endl;
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a[i]);
	}
	cout << endl;

	//���� ����
	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] < a[j])
			{
				int key = a[i];
				a[i] = a[j];
				a[j] = key;
			}
		}
	}

	//���� �� ���
	cout << "���� ���� �� �Է�" << endl;
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a[i]);
	}
	cout << endl;
	//���� ����

	//5�� ���� ���������
	for (int i = 0; i < 5; i++) {
		a[i] = rand() % 50 + 1;
	}

	//���� �� ���
	cout << "���� ���� �� �Է�" << endl;
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a[i]);
	}
	cout << endl;

	//���� ���� 
	for (int i = 0; i < 5; i++)
	{
		for (int j = 1; j < 5 - i; j++)
		{
			if (a[j - 1] > a[j])
			{
				int key = a[j - 1];
				a[j - 1] = a[j];
				a[j] = key;
			}
		}
	}

	//���� �� ���
	cout << "���� ���� �� �Է�" << endl;
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a[i]);
	}
	cout << endl;


}