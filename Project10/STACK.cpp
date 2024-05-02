//소제목 2 수정한 프로그램. 수정위치에 참조문/**/으로 오답 이유를 반드시 첨부
#include <stdio.h>
// 수정 전: 스택은 전역 변수로 선언되어야 합니다.
int stack[10];

// 수정 후: 스택의 크기를 나타내는 상수를 정의합니다.
#define STACK_SIZE 10

void Stack() { 
    for (int i = 0; i < STACK_SIZE; i++)
        stack[i] = NULL;
}

// 수정 전: isEmpty 함수는 비어있는지 확인하는 함수로서 반환형이 void로 선언되어 있습니다.
// 반환형을 int로 변경하고 스택이 비어있는지 여부를 반환하도록 수정합니다.
int isEmpty() {
    for (int i = 0; i < STACK_SIZE; i++) {
        if (stack[i] != NULL)
            return 1; // 수정: 스택이 비어있지않으면 1을 반환합니다.
    }
    return 0; // 수정: 스택이 비어있으면 0을 반환합니다.
}

// 수정 전: push 함수 내의 if 문에서 할당 연산자(=)를 비교 연산자(==)로 바꿔야 합니다.
void push(int e) {
    printf("입력\n");
    scanf_s("%d", &e);
    for (int i = 0; i < STACK_SIZE; i++) {
        if (stack[i] == NULL) { // 수정: 할당 연산자를 비교 연산자로 변경합니다.
            stack[i] = e;
            break;
        }
        if (stack[STACK_SIZE] != NULL) { // 수정: 스택이 가득 차 있을 경우 추가 처리가 필요합니다.
            printf("스택이 가득참!");
            break;
        }
    }
}
//수정 전 반환형이 void로 선언되어 있습니다.
//수정 후 반환형을 int로 변경합니다.
int pop() {
    int a;
    if (stack[0] != NULL) {
        a = stack[0];
        stack[0] = NULL;
    }
    for (int i = 1; i < STACK_SIZE; i++) {
        if (stack[i] == NULL) {
            a = stack[i - 1];
            stack[i - 1] = NULL;
        }
        break;
    }
    if (stack[9] != NULL) {
        a = stack[9];
        stack[9] = NULL;
    }
    return a;
}

// 수정 전: peek 함수도 반환형이 void로 선언되어 있으나 값을 반환해야 합니다.
// 반환형을 int로 변경하고, peek한 값을 반환하도록 수정합니다.
int peek() {
    int a = -1; // 수정: 스택이 비어있을 때를 고려하여 기본값을 설정합니다.
    if (stack[0] != NULL) {
        a = stack[0];
    }
    for (int i = 0; i < STACK_SIZE; i++) {
        if (stack[i] == NULL) {
            a = stack[i - 1];
        }
    }
    if (stack[9] != NULL) {
        a = stack[9];
    }
    return a; // 수정: peek한 값을 반환합니다.
}

// 수정 전: size 함수 내에서 변수 a가 초기화되지 않았습니다.
void size() {
    int a = 0; // 수정: 스택에 있는 원소의 개수를 저장할 변수를 초기화합니다.
    for (int i = 0; i < STACK_SIZE; i++) {
        if (stack[i] != NULL) {
            a++;
        }
    }
    printf("%d", a);
}
void clear() {
    for (int i = 0; i < STACK_SIZE; i++)
        stack[i] = NULL;
}

int main() {
    clear();
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printf("peek: %d\n", peek());
    printf("pop: %d\n", pop());
    printf("peek: %d\n", peek());
    size();
    return 0;
}
