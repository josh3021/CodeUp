#include <stdio.h>

const int ARRAY_SIZE = 10;

int bubble_arr[10] = {5, 9, 7, 3, 4, 2, 8, 1, 6, 10};
int selection_arr[10] = {5, 9, 7, 3, 4, 2, 8, 1, 6, 10};
int insertion_arr[10] = {5, 9, 7, 3, 4, 2, 8, 1, 6, 10};
int quick_arr[10] = {5, 9, 7, 3, 4, 2, 8, 1, 6, 10};

void bubble_sort() {
  int temp, i, j;
  for (i = 0; i < ARRAY_SIZE; i++) {
    for (j = 1; j < ARRAY_SIZE - i; j++) {
      if (bubble_arr[j - 1] > bubble_arr[j]) {
        temp = bubble_arr[j-1];
        bubble_arr[j-1] = bubble_arr[j];
        bubble_arr[j] = temp;
      }
    }
  }
  for (i = 0; i< ARRAY_SIZE; i++) {
    printf("%d ", bubble_arr[i]);
  }
  printf("\n");
}

void selection_sort() {
  int temp, i, j, min, min_index;
  for (i = 0; i < ARRAY_SIZE; i++) {
    min = __INT_MAX__;
    for (j = i; j < ARRAY_SIZE; j++) {
      if (min > selection_arr[j]) {
        min = selection_arr[j];
        min_index = j;
      }
    }
    // swap, 한번 틀림
    temp = selection_arr[i];
    selection_arr[i] = min;
    selection_arr[min_index] = temp;
  }
  for (i=0; i< ARRAY_SIZE; i++) {
    printf("%d ", selection_arr[i]);
  }
  printf("\n");
}

void insertion_sort() {
  int temp, i, j;
  for (i = 1; i< ARRAY_SIZE; i++) {
    j = i;
    while(insertion_arr[j] < insertion_arr[j-1]) {
      if (j < 1) { // 한번 틀림
        break;
      }
      temp = insertion_arr[j-1];
      insertion_arr[j-1] = insertion_arr[j];
      insertion_arr[j] = temp;
      j--;
    }
  }

  for (i = 0; i < ARRAY_SIZE; i++) {
    printf("%d ", insertion_arr[i]);
  }
  printf("\n");
}


void quick_sort(int start, int end) {
  if (start >= end) { // 반드시 넣어줘야 함!
    return;
  }
  int i = start + 1;
  int j = end;
  int pivot = quick_arr[start];
  int temp;

  while (i <= j) {
    while (quick_arr[i] <= quick_arr[pivot]) {
      i++;
    }
    while (quick_arr[j] >= quick_arr[pivot] && j > start) {
      j--;
    }

    // 만약 i와 j가 엇갈렸으면!
    if (i > j) {
      // quick_arr[j]와 quick_arr[pivot]을 swap!
      temp = quick_arr[j];
      quick_arr[j] = quick_arr[pivot];
      quick_arr[pivot] = temp;
    } else {
      // quick_arr[i]와 quick_arr[j]를 swap!
      temp = quick_arr[i];
      quick_arr[i] = quick_arr[j];
      quick_arr[j] = temp;
    }
  }

  
  quick_sort(start, j); // 한번 틀림
  quick_sort(j+1, end);
}

int main (void) {
  bubble_sort();
  selection_sort();
  insertion_sort();
  quick_sort(0, ARRAY_SIZE - 1);
  for (int i = 0; i < ARRAY_SIZE; i++) {
    printf("%d ", quick_arr[i]);
  }
  return 0;
}