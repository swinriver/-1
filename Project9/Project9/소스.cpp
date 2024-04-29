#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main() 
{
	srand(time(NULL));
	int a[10][5], avg = 0, sum = 0;
	int min = 100, min2 = 100, min3 = 100;
	for (int i = 0; i < 10; i++)
	{
		a[i][0]=i+1;
		for (int j = 1; j < 4; j++)
		{
			a[i][j] = rand() % 100 + 1;
			sum = a[i][1]+a[i][2]+a[i][3];
		}
		avg = sum / 3;
		a[i][4] = avg;
	}
	cout << "학번  | 국어 | 영어 |  수학 |  평균" << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", a[i][j]);
		}
		cout << endl;
	}
	//정렬
	cout << "학번  | 국어 | 영어 |  수학 |  평균" << endl;
	// 평균 점수를 기준으로 배열 정렬
	for (int i = 0; i < 9; i++) {
		int mina = i;
		for (int j = i + 1; j < 10; j++) {
			if (a[j][4] < a[mina][4]) {
				mina = j;
			}
		}
		// 요소 교환
		if (mina != i) {
			for (int j = 0; j < 5; j++) {
				int temp = a[i][j];
				a[i][j] = a[mina][j];
				a[mina][j] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", a[i][j]);
		}
		cout << endl;
	}


	//과목별 최저 점수와 학번 출력
	 min = 100, min2 = 100, min3 = 100;
	for (int i = 0; i < 10; i++)
	{
		if (min > a[i][1]){
			min = a[i][1];
		}
		if (min2 > a[i][2]){
			min2 = a[i][2];
		}
		if (min3 > a[i][3]){
			min3 = a[i][3];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (min == a[i][1]) {
			cout << "학번 : "<< a[i][0]<< " 최저 국어 점수"<< min << endl;
		}
		if (min2 == a[i][2]) {
			cout << "학번 : " << a[i][0] << " 최저 영어 점수" << min2 << endl;
		}
		if (min3 == a[i][3]) {
			cout << "학번 : " << a[i][0] << " 최저 과학 점수" << min3 << endl;
		}
	}










}