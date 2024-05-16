#include <iostream>
#include <string>
#include <time.h>
#define size 10
using namespace std;
class Queue
{
private:
	int Q[size], front = -1, rear = -1;
public:
	void queue();
	int isEmpty();
	void showQueueData();
	void enqueue(int c);
	void dequeue();
};
void Queue::queue()
{
	for (int i = 0; i < size; i++) 
	{
		Q[i] = NULL;
	}
	cout << "ť ����\nfront : \n" << front << "rear : " << rear << endl;
}
int Queue::isEmpty()
{
	if (front == rear)
		return true; //�������
	else
		return false; //�� �������

}
void Queue::showQueueData() {
	printf("\n< Queue > : ");
	for (int i = front + 1; i <= rear; i++) {
		printf("%d ", Q[i]);
	}
}

void Queue::enqueue(int c)
{
	if (rear-front == size) 
	{
		cout << "��ȭ����" << endl;
		showQueueData();
		return;
	}	 
	rear += 1;
	cout << "\n�ڷ� ���� ���ڸ� �����ÿ�" << endl;
	cin >> c;
	Q[rear] = c;
	showQueueData();
}
void Queue::dequeue()
{
	if (isEmpty())
	{
		cout << "ť�� ��� �ֽ��ϴ�." << endl;
		return;
	}
		front += 1;
		cout <<"\n"<< Q[front] << endl;
		Q[front] = NULL;
		showQueueData();
}
int main() {
	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(6);
	q.enqueue(7);
	q.enqueue(8);
	q.enqueue(9);
	q.enqueue(10);
	q.dequeue();
	q.dequeue();
	return 0;
}

