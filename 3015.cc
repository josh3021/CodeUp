#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


struct Student {
  char name[10];
  int score;
};

// // 퀵소트를 사용
// void sort_by_score(struct List* students, int start, int end) {
//   if (start > end) {
//     return;
//   }
//   int pivot = start;
//   int i = start+1;
//   int j = end;
//   struct List temp;

//   while (i <= j) {
//     while(students[i].score >= students[pivot].score) {
//       i++;
//     }
//     while(students[j].score <= students[pivot].score && j > pivot) {
//       j--;
//     }

//     if (i >= j) {
//       temp = students[pivot];
//       students[pivot] = students[j];
//       students[j] = temp;
//     } else {
//       temp = students[i];
//       students[i] = students[j];
//       students[j] = temp;
//     }
//   }

//   sort_by_score(students, start, j-1);
//   sort_by_score(students, j+1, end);
// }

// void selection_sort(struct List* students, int length) {
//   int max;
//   int max_index;
//   struct List temp;
//   for (int i=0; i<length; i++) {
//     max = 0;
//     for (int j=i; j<length; j++) {
//       if (max < students[j].score) {
//         max_index = j;
//         max = students[j].score;
//       }
//     }

//     //swap
//     temp = students[max_index];
//     students[max_index] = students[i];
//     students[i] = temp;
//   }
// }

// int main (void) {
//   int n, m;
//   scanf("%d %d", &n, &m);
//   struct List students[n];

//   for (int i=0; i<n; i++) {
//     scanf("%s %d", students[i].name, &students[i].score);
//   }

//   // sort_by_score(students, 0, n-1);
//   selection_sort(students, n);

//   for (int i=0; i < m; i++) {
//     printf("%s\n", students[i].name);
//   }


//   return 0;
// }

// stable sort를 사용해야함

bool compare(const Student& a, const Student& b) {
  return a.score > b.score;
}

int main(void) {
  int n, m;
  cin >> n >> m;
  vector<Student> students(n);

  for (int i=0; i<n; i++) {
    cin >> students[i].name >> students[i].score;
  }

  stable_sort(students.begin(), students.end(), compare);

  for (int i=0; i < m; i++) {
    cout << students[i].name << "\n";
  }
}