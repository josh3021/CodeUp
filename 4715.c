#include <stdio.h>

struct Student {
  int country;
  int number;
  int score;
};

void sort(struct Student* students, int start, int end) {
  if (start > end) {
    return;
  }
  int pivot = start;
  int i = start + 1;
  int j = end;
  struct Student temp;

  while (i <= j) {
    while(students[i].score <= students[pivot].score) {
      i++;
    }
    while(students[j].score >= students[pivot].score && j > pivot) {
      j--;
    }

    if (i >= j) {
      temp = students[j];
      students[j] = students[pivot];
      students[pivot] = temp;
    } else {
      temp = students[j];
      students[j] = students[i];
      students[i] = temp;
    }
  }
  sort(students, start, j-1);
  sort(students, j+1, end);
}

int main(void) {
  int n;
  scanf("%d", &n);
  struct Student students[n];
  for (int i=0; i<n; i++) {
    scanf("%d %d %d", &students[i].country, &students[i].number, &students[i].score);
  }
  sort(students, 0, n-1);
  int ban, print = 0;
  for (int i=n-1; i>=0; i--) {
    if (print >= 3) {
      break;
    }
    if (students[i].country != ban) {
      printf("%d %d\n", students[i].country, students[i].number);
      print++;
    }
    if (i != n-1 && students[i + 1].country == students[i].country) {
      ban = students[i].country;
    }
  }

  return 0;
} 