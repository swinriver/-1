#include <stdio.h>

#define STACK_SIZE 10

int stack[STACK_SIZE];

void Stack() {
    for (int i = 0; i < STACK_SIZE; i++)
        stack[i] = NULL;
}

int isEmpty() {
    for (int i = 0; i < STACK_SIZE; i++) {
        if (stack[i] != NULL)
            return 1;
    }
    return 0;
}
void push(int e) {
    // 사용자로부터 입력을 받는 대신에 이미 매개변수로 전달받은 값을 스택에 추가합니다.
    for (int i = 0; i < STACK_SIZE; i++) {
        if (stack[i] == NULL) { // 수정: 할당 연산자를 비교 연산자로 변경합니다.
            stack[i] = e;
            return; // 수정: 요소를 추가하면 함수를 종료합니다.
        }
    }
    // 스택이 가득 차 있는지 확인하는 조건을 수정합니다.
    printf("스택이 가득참!\n");
}

int pop() {
    int a = -1; // 스택이 비어있을 경우를 고려하여 기본값을 설정합니다.
        for (int i = STACK_SIZE - 1; i >= 0; i--) {
            if (stack[i] != NULL) {
                a = stack[i];
                stack[i] = NULL; // 제거한 요소를 NULL로 초기화합니다.
                return a;
            }
        }
    return a; // 스택이 비어있거나 pop에 실패한 경우 기본값을 반환합니다.
}

int peek() {
    int a = -1; // 수정: 기본값을 설정합니다.
    if (stack[0] != NULL) {
        a = stack[0];
    }
    for (int i = 0; i < STACK_SIZE; i++) {
        if (stack[i] == NULL) {
            a = stack[i - 1];
            break; // 수정: 스택에서 요소를 찾았으면 반복문을 종료합니다.
        }
    }
    if (stack[STACK_SIZE - 1] != NULL) {
        a = stack[STACK_SIZE - 1];
    }
    return a;
}

void size() {
    int a = 0;
    for (int i = 0; i < STACK_SIZE; i++) {
        if (stack[i] != NULL) {
            a++;
        }
    }
    printf("스택의 크기: %d\n", a); // 수정: 스택의 크기를 출력합니다.
}

void clear() {
    for (int i = 0; i < STACK_SIZE; i++)
        stack[i] = NULL;
}

int main() {
    Stack();
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
