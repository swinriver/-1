#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{

	//선택 정렬
	srand(time(NULL));
	int a[5];

	//5개 랜덤 변수 만들기
	for (int i = 0; i < 5; i++) {
		a[i] = rand() % 50 + 1;
	}

	//정렬 전 출력
	cout << "선택 정렬 전 입력" << endl;
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a[i]);
	}
	cout << endl;

	//선택 정렬
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
	//정렬 후 출력
	cout << "선택 정렬 후 입력" << endl;
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a[i]);
	}
	cout << endl;
	//삽입 정렬

	//5개 랜덤 변수 만들기
	for (int i = 0; i < 5; i++) {
		a[i] = rand() % 50 + 1;
	}

	//정렬 전 출력
	cout << "삽입 정렬 전 입력" << endl;
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a[i]);
	}
	cout << endl;

	//삽입 정렬
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

	//정렬 후 출력
	cout << "삽입 정렬 후 입력" << endl;
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a[i]);
	}
	cout << endl;
	//버블 정렬

	//5개 랜덤 변수만들기
	for (int i = 0; i < 5; i++) {
		a[i] = rand() % 50 + 1;
	}

	//정렬 전 출력
	cout << "버블 정렬 전 입력" << endl;
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a[i]);
	}
	cout << endl;

	//버블 정렬 
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

	//정렬 후 출력
	cout << "버블 정렬 후 입력" << endl;
	for (int i = 0; i < 5; i++) {
		printf("%d\t", a[i]);
	}
	cout << endl;


}