#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define SIZE 40
// 단순 연결 리스트의 노드 구조를 구조체로 정의
typedef struct ListNode {
  char data[SIZE];
  int year;
  struct ListNode* link;
} listNode;
// 리스트 시작을 나타내는 head 노드를 구조체로 정의
typedef struct {
  listNode* head;
} linkedList_h;

linkedList_h *createLinkedList_h() {
  listNode* headNode = (listNode*) malloc(sizeof(listNode));
  linkedList_h* L = (linkedList_h*) malloc(sizeof(linkedList_h));
  strcpy(headNode->data, "HEAD");
  headNode->year = -1;
  headNode->link = NULL;
  L->head = headNode;
  return L;
}

void insertNode(linkedList_h *L, char s[40], int y) {
  // 이전 Node가 현재 Node를 가르킬 수 있게 만들기
  // 새로운 ListNode를 생성하기
  listNode* newNode = (listNode*) malloc(sizeof(listNode));
  // newNode에 데이터 할당하기
  strcpy(newNode->data, s);
  newNode->year = y;
  newNode->link = NULL;

  // 기존 listNode의 마지막을 찾기
  struct ListNode* currentNode = L->head;

  while(currentNode->link != NULL) {
    currentNode = currentNode->link;
  }
  // while에서 나오면 currentNode는 기존 listNode의 마지막을 가르킨다
  // currentNode의 링크를 새로운 노드를 가르키게 할당한다;
  currentNode->link = newNode;
  
  return;
}

void freeLinkedList_h(linkedList_h *L) {
  struct ListNode* currentNode = L->head;
  struct ListNode* nextNodePointer = L->head->link;

  while(nextNodePointer->link != NULL) {
    nextNodePointer = nextNodePointer->link;
    free(currentNode);
  }
  free(nextNodePointer);
  return;
}

 // 연결리스트를 순서대로 출력
void printList(linkedList_h* L) {
  int Num = 0;
  listNode* p; // NULL
  p = L->head;
  while (p != NULL)
  {
    // ( );
    printf(" %d 제목: %s\t", Num, p->data);
    printf(" 년도: %d\n", p->year);
    p = p->link;
    Num++;
  }
  printf("\n");
}

int menu() {
  int men = 0;
  printf(" --------------------\n");
  printf(" 1. 영화 정보 추가\n");
  printf(" 2. 영화 정보 출력\n");
  printf(" 3. 종료\n");
  printf(" --------------------\n");
  printf(" 번호를 선택하세요 : ");
  scanf("%d", &men);
  return men;
}

int main(void) {
  int cho = 0, y;
  char s[40]; linkedList_h* L;
  L = createLinkedList_h();
  while ((cho = menu()) != 3) {
    getchar();
    if (cho == 1) {
      printf(" 영화의 제목을 입력하세요 : ");
      scanf("%s", s);
      printf(" 영화의 개봉 연도를 입력하세요 : ");
      scanf("%d", &y);
      insertNode(L, s, y);
    }
    else if (cho == 2) {
      printList(L);
      getchar();
    }
    else if (cho == 3) {
      freeLinkedList_h(L);
      break;
    }
    // 윈도우일 경우, system("cls");
    // MAC 유저라면, system("clear");
    // #ifdef _WIN32
    //   system("cls");
    // #else
    //   system("clear");
    // #endif
  }
  return 0;
}