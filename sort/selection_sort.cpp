#include <iostream>

using namespace std;

int arr[5] = {3, 5, 2, 4, 1};

void sortAsc () {
  for (int i = 0; i < 4; i++) {
    int min_index = i;

    for (int j = i + 1; j < 5; j++) {
      if (arr[min_index] > arr[j]) {
        min_index = j;
      }
    }

    if (min_index != i) {
      arr[min_index] += arr[i];
      arr[i] = arr[min_index] - arr[i];
      arr[min_index] -= arr[i]; 
    }
  }
  for (int i=0; i < 5; i++) {
    cout << arr[i];
  }
}

void sortDesc () {
  for (int i = 0; i < 4; i++) {
    int max_index = i;

    // MAX INDEX 찾기
    for (int j = i + 1; j < 5; j++) {
      if (arr[max_index] < arr[j]) {
        max_index = j;
      }
    }

    if (max_index != i) {
      arr[i] += arr[max_index];
      arr[max_index] = arr[i] - arr[max_index];
      arr[i] -= arr[max_index];
    }
  }
  for (int i=0; i < 5; i++) {
    cout << arr[i];
  }
}

int main (void) {
  cout << "Sort By ASC: ";
  sortAsc();
  cout << endl;
  cout << "Sort By DESC: ";
  sortDesc();
  return 0;
}

/*
1. 주어진 배열 중에서 최솟값을 찾는다.
2. 그 값을 맨 앞에 위치한 값과 교체한다(패스(pass)).
3. 맨 처음 위치를 뺀 나머지 리스트를 같은 방법으로 교체한다.
4. 하나의 원소만 남을 때까지 위의 1~3 과정을 반복한다.
*/