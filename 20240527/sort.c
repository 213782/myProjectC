#include <stdio.h>

int main() {
  int x = 0;
  int y = 0;
  int z = 0;
  printf("please enter three number");
  scanf("%d %d %d", &x, &y, &z);
  int arr[3] = {x, y, z};
  int sz = sizeof(arr) / sizeof(arr[0]);
  int max = arr[0];
  for (int i = 0; i < sz - 1; i++) {
    for (int n = 1; n < sz; n++) {
      if (max < arr[n]) {
        arr[i] = arr[i] ^ arr[n];
        arr[n] = arr[i] ^ arr[n];
        arr[i] = arr[i] ^ arr[n];
      }
    }
  }
  for (int i = 0; i < sz; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
