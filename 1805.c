#include <stdio.h>

struct Device {
  int id;
  int gas;
};

struct Device* sort_by_id(struct Device* devices, int length) {
  struct Device temp;
  // insertion sort 사용
  for (int i=1; i<length; i++) {
    int j=i-1;
    while(devices[j].id>devices[j+1].id && j>=0) {
      temp = devices[j];
      devices[j] = devices[j+1];
      devices[j+1] = temp;
      j--;
    }
  }
  return devices;
}

int main (void) {
  int n;
  scanf("%d", &n);

  struct Device devices[n];
  for (int i=0; i < n; i++) {
    scanf("%d %d", &devices[i].id, &devices[i].gas);
  }
  struct Device* sorted_devices = sort_by_id(devices, n);

  for (int i=0; i < n; i++) {
    printf("%d %d\n", sorted_devices[i].id, sorted_devices[i].gas);
  }
  return 0;
}