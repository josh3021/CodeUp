#include <stdio.h>
#include <stdlib.h>

struct Student {
  char name[10];
  int score1;
  int score2;
  int score3;
};

int* get_score1_rank(struct Student* students, int n) {
  int* ranks = malloc(sizeof(int) * n);
  for (int i=0; i<n; i++) {
    ranks[i] = 1;
    for (int j=0; j<n; j++) {
      if (students[i].score1 < students[j].score1) {
        ranks[i]++;
      }
    }
  }
  return ranks;
}

int* get_score2_rank(struct Student* students, int n) {
  int* ranks = malloc(sizeof(int) * n);
  for (int i=0; i<n; i++) {
    ranks[i] = 1;
    for (int j=0; j<n; j++) {
      if (students[i].score2 < students[j].score2) {
        ranks[i]++;
      }
    }
  }
  return ranks;
}

int* get_score3_rank(struct Student* students, int n) {
  int* ranks = malloc(sizeof(int) * n);
  for (int i=0; i<n; i++) {
    ranks[i] = 1;
    for (int j=0; j<n; j++) {
      if (students[i].score3 < students[j].score3) {
        ranks[i]++;
      }
    }
  }
  return ranks;
}

int find_index(int* score1_ranks) {
  int i = 0;
  while(score1_ranks[i] != 1) {
    i++;
  }
  return i;
}

int main(void) {
  int n;
  scanf("%d", &n);

  struct Student students[n];
  for (int i=0; i<n; i++) {
    scanf("%s %d %d %d", students[i].name, &students[i].score1, &students[i].score2, &students[i].score3);
  }

  int* score1_ranks = get_score1_rank(students, n);
  int* score2_ranks = get_score2_rank(students, n);
  int* score3_ranks = get_score3_rank(students, n);

  int index = find_index(score1_ranks);
  
  printf("%s %d %d", students[index].name, score2_ranks[index], score3_ranks[index]);

  return 0;
}