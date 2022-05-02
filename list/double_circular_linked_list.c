#include "stdio.h"
#include "stdlib.h"
// 이중 연결 리스트의 노드 구조를 구조체로 정의
typedef struct node {
  int num;
  int message;
  char check;
  struct node* prev;
  struct node* next;
} Node;
// 왼쪽(선행) 노드에 대한 링크 // 오른쪽(다음) 노드에 대한 링크
// 리스트 위치를 나타내는 tail 노드를 구조체로 정의 
typedef struct {
  int countIndex;
  Node* tail;
} List;

void insertNode(List* list, int position, int element) {
  Node* preNode = list->tail;
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->message = element;
  newNode->check = 'C';
  if (list->countIndex == 0) {
    newNode->next = newNode;
    newNode->prev = newNode;
    list->tail = newNode;
  }
  else {
    for (int i = 0; i < position; i++) {
        preNode = preNode->next;
    }
    newNode->next = preNode->next;
    newNode->prev = preNode;
    newNode->next->prev = newNode;
    preNode->next = newNode;
    if (position == list->countIndex) {
      list->tail = newNode;
    }
  }
  list->countIndex++;
  newNode->num = list->countIndex;
}

List* createList() {
  List* list;
  // 테일 노드 할당
  list = (List*)malloc(sizeof(List));
  if (list == NULL) {
    printf("ERROR\n");
  }
  else {
    list->tail = NULL;
    list->countIndex = 0;
  }
  return list;
}

void printList(List* list) {
  int i, n;
  Node* node;
  if (list->countIndex == 0) {
    printf("NULL LIST\n");
    return;
  }
  node = list->tail;
  node = node->next;
  n = list->countIndex;
  for (i = 0; i < n; i++) {
    printf(" %d, %2d, %c\n", node->num, node->message, node->check);
    node = node->next;
  }
}

void BackprintList(List* list) {
  int i, n = list->countIndex;
  Node* node;
  if (n == 0) {
    printf("NULL LIST\n");
    return;
  }
  node = list->tail;
  for (i = 0; i < n; i++) {
    printf(" %d, %2d, %c\n", node->num, node->message, node->check);
    node = node->prev;
  }
}

void printListByOrder(List* list) {
  int i, n, j, m;
  Node* node;
  if (list->countIndex == 0) {
    printf("NULL LIST\n");
    return;
  }
  node = list->tail;
  node = node -> next;
  n = list->countIndex;

  for (i = 0; i < n; i++) {
    printf("%d ", node->num);
    node->check = 'P';

    if (i == n-1) {
      break;
    }

    j=0;
    m = node->message;

    if (m > 0) {
      while (j < m) {
        node = node->next;
        if (node->check == 'C') {
          j++;
        }
      }
    }
    else {
      while (j > m) {
        node = node->prev;
        if (node->check == 'C') {
          j--;
        }
      }
    }
  }
}

int main() {
  int k, n, i=0;
  List* list;
  list = createList();
  scanf("%d", &n);
  while (i < n) {
    scanf("%d", &k);
    insertNode(list, i++, k);
  }
  // printList(list);
  // printf("\n");
  // BackprintList(list);
  // printf("\n");
  printListByOrder(list);
  getchar();
  return 0;
}