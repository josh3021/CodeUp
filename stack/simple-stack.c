#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 10
typedef int element; // 스택 원소(element)의 자료형을 int로 정의
element stack[5][STACK_SIZE];// 2차원 배열 스택 선언
struct pinBall {
  int number;
  int x;
};
int multitop[5] = { -1, -1, -1, -1, -1 }; // top 초기화
int top = 0;
int score[5] = { 30, 20, 40, 10, 20 };

// 스택이 공백 상태인지 확인하는 연산
int isEmpty() {
  if (top == -1)
    return 1;
  else
    return 0;
}
// 스택이 포화 상태인지 확인하는 연산
int isFull(){
  if (top == STACK_SIZE - 1)
    return 1;
  else
    return 0;
}

 // 스택의 top에서 원소를 삭제하는 연산
element pop(int number) {
  top = multitop[number];
  if (isEmpty()) { // 스택이 공백 상태인 경우 
    printf("\n\n Stack is Empty!!\n");
    return 0;
  }
  else {
    element temp = stack[number][top];
    stack[number][top--] = 0;
    multitop[number] = top;
    printf("\nstack number %d STACK POP: %d", number+1, temp);
    return temp;
  }
}

// 스택의 top에 원소를 삽입하는 연산
void push(int number, element item) {
  top = multitop[number];
  if (isFull()) { // 스택이 포화 상태인 경우
    printf("\n\n Stack is FULL! \n");
  } else {
    if (stack[number][top] == item) {
      printf("\n\n 마지막 줄과 동일한 핀볼 삽입됨");
      pop(number);
    }
    else {
      stack[number][++top] = item;
      multitop[number] = top;
    }
  }
}

 // 스택의 top 원소를 검색하는 연산
element peek(number) {
  top = multitop[number];
  if (isEmpty()) { // 스택이 공백 상태인 경우
    printf("\n\n Stack is Empty !\n");
    exit(1);
  }
  else return stack[number][top];// 현재 top의 원소 확인
}


// 스택의 원소를 출력하는 연산
void printStack() {
  int i, j;
  for (i = 0; i < 5; i++) {
    printf("\n stack number %d STACK [ ", i+1);
    for (j = 0; j <= multitop[i]; j++)
      printf("%d ", stack[i][j]);
    printf("] ");
  }
}

void calcScore() {
  for (int i = 0; i < 5; i++) {
    printf("%d ", (multitop[i]+1)*score[i]);
  }
}

int main() {
  int i, j, x;
  element item;
  struct pinBall pB[10];
  int ballNumber[10][2] = { {5,1}, {3,5}, {3,2}, {2,3}, {4,2}, {3,4}, {5,4}, {5,3}, {2,1}, {1,3} };
  int intData[5][3] = { {2, 0, 0}, {0, 0, 0}, {5, 2, 0}, {3, 0, 0}, {1, 4, 0}};
  for (i = 0; i < 10; i++) {
    pB[i].number = ballNumber[i][0];
    pB[i].x = ballNumber[i][1];
  }
  printf("\n** 스택의 초기 상태 **");
  for (i = 0; i < 5; i++) {
    for (j =0; j <3; j++) {
      item = intData[i][j];
      if (item != 0) push(i, item);
    }
  }
  printStack();
  for (i = 0; i < 10; i++) {
    item = pB[i].number;
    x = pB[i].x-1;
    push(x, item);
  }
  printf("\n\n **스택에 구슬이 들어간 상태 **");
  printStack();
  printf("\n");
  // printf("\n\n **스택 3번쨰 줄에서 구슬 pop**");
  // pop(2);
  // printf("\n");
  printf("\n\n **스택에 구슬이 들어간 상태 **");
  printStack();
  printf("\n");
  printf("\n\n ** 점수 계산 **");
  printf("\n");
  calcScore();
  getchar();
  return 0;
}