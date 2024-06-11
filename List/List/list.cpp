#include <iostream>
#include <string>
#define SIZE 5
using namespace std;

class List
{
	int listend = -1;   //����Ʈ�� ���� ��Ÿ���� �ε���
	int l[SIZE];    //����Ʈ�� ������ �迭

public:
	void list();    //����Ʈ�� �ʱ�ȭ
    int menu(); //�޴��� 
    void insert(int pos, int value);    //����Ʈ�� ���� �����ϴ� �Լ�
    void remove(int pos);   //����Ʈ�� ���� �����ϴ� �Լ�
    void display(); //���� ����Ʈ ���¸� ����ϴ� �Լ�

};
void List::list()
{
    for (int i = 0; i < SIZE; i++)
    {
        l[i] = -1; //��� ��Ҹ� -1�� �ʱ�ȭ
    }

}

int List::menu()
{
    int choice;
    while (true) {
        int position,value;
        cout << "Menu:\t";
        cout << "1. Insert\t";
        cout << "2. Remove\t";
        cout << "3. Display\t";
        cout << "4. ����\n";
        cout << " �޴��� ���ÿ�: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "������ ��ġ�� ���ÿ�: ";
            cin >> position;
            cout << "���� ���� �����ÿ�: ";
            cin >> value;
            insert(position, value);
            break;
        case 2:
            cout << "���� ������ ��ġ�� �����ÿ�: ";
            cin >> position;
            remove(position);
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "����" << endl;
            return 0;
        default:
            cout << "�ٽ� �����Ͻÿ�" << endl;
        }
    }

}
void List::insert(int pos, int value) {
    if (listend >= SIZE - 1) {
        cout << "����Ʈ ��ȭ����. ���� �Ұ�" << endl; //�迭�� ũ�⸦ �Ѿ ��ġ�� �Է� 
        return; //�Լ��� ���
    }
    if (pos < 0) { //�迭�� ũ�⸦ �Ѿ ��ġ�� �Է��Ҷ�
        cout << "��ȿ���� ���� ��ġ" << endl;
        return; //�Լ��� ���
    }
    if (pos > listend + 1) {
        pos = listend + 1; // ���� ��ġ�� listend���� ũ�� ����Ʈ�� ���� ����
    }       
    for (int i = listend; i >= pos; i--) {  
        l[i+1] = l[i]; //�Է��� ��ġ �� �ڷ� ��ĭ�� �ű�,�� ���� �迭�� ũ�⸸ŭ
    }
    l[pos] = value; //�� ��ġ�� ���� ����
    listend++; //�迭�� ũ�� ����
    display(); 
}
void List::remove(int pos)
{
    if (pos > listend || pos < 0){
        cout << "��ȿ���� ���� ��ġ" << endl; //�迭�� ũ�⸦ ��� ��ġ �Է��Ҷ�
        return; //�Լ��� ���
    }
    for (int i = pos; i < listend; i++){
        l[i] = l[i + 1];    // �Է��� ��ġ ������ ������ ������ ��ĭ�� �ű� 
    }
    l[listend] = -1; //�迭 ���� �ʱ�ȭ
    listend--; 
    display();
}


void List::display() {
    if (listend == -1) {
        cout << "���� ����" << endl;
        return;
    }
    for (int i = 0; i <= listend; i++) {
        cout << l[i] << " ";
    }
    cout << endl;
}

int main()
{
    List mylist;
    mylist.menu();
}
