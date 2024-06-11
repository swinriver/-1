#include <iostream>
#include <string>
#define SIZE 5
using namespace std;

class List
{
	int listend = -1;   //리스트의 끝을 나타내는 인덱스
	int l[SIZE];    //리스트를 저장할 배열

public:
	void list();    //리스트를 초기화
    int menu(); //메뉴판 
    void insert(int pos, int value);    //리스트에 값을 삽입하는 함수
    void remove(int pos);   //리스트에 값을 제거하는 함수
    void display(); //현재 리스트 상태를 출력하는 함수

};
void List::list()
{
    for (int i = 0; i < SIZE; i++)
    {
        l[i] = -1; //모든 요소를 -1로 초기화
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
        cout << "4. 종료\n";
        cout << " 메뉴를 고르시오: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "삽입할 위치를 고르시오: ";
            cin >> position;
            cout << "넣을 값을 적으시오: ";
            cin >> value;
            insert(position, value);
            break;
        case 2:
            cout << "값을 제거할 위치를 적으시오: ";
            cin >> position;
            remove(position);
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "종료" << endl;
            return 0;
        default:
            cout << "다시 선택하시오" << endl;
        }
    }

}
void List::insert(int pos, int value) {
    if (listend >= SIZE - 1) {
        cout << "리스트 포화상태. 삽입 불가" << endl; //배열의 크기를 넘어간 위치를 입력 
        return; //함수를 벗어남
    }
    if (pos < 0) { //배열의 크기를 넘어간 위치를 입력할때
        cout << "유효하지 않은 위치" << endl;
        return; //함수를 벗어남
    }
    if (pos > listend + 1) {
        pos = listend + 1; // 삽입 위치가 listend보다 크면 리스트의 끝에 삽입
    }       
    for (int i = listend; i >= pos; i--) {  
        l[i+1] = l[i]; //입력한 위치 값 뒤로 한칸씩 옮김,단 현재 배열의 크기만큼
    }
    l[pos] = value; //고른 위치에 값을 삽입
    listend++; //배열의 크기 증가
    display(); 
}
void List::remove(int pos)
{
    if (pos > listend || pos < 0){
        cout << "유효하지 않은 위치" << endl; //배열의 크기를 벗어난 위치 입력할때
        return; //함수를 벗어남
    }
    for (int i = pos; i < listend; i++){
        l[i] = l[i + 1];    // 입력한 위치 값부터 끝까지 앞으로 한칸씩 옮김 
    }
    l[listend] = -1; //배열 끝값 초기화
    listend--; 
    display();
}


void List::display() {
    if (listend == -1) {
        cout << "공백 상태" << endl;
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
