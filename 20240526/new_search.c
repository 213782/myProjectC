#include <stdio.h>

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int enter = 7;
  int sz = sizeof(arr) / sizeof(arr[0]);
  int right = sz - 1;
  int left = 0;

  while (left <= right) {
    int mid = (left + right) / 2;
    if (enter < arr[mid]) {
      right = mid - 1;
    } else if (enter > arr[mid]) {
      left = mid + 1;
    } else {
      printf("the number has been found,the subscript is %d\n", mid);
      break;
    }
  }
  if (left > right) {
    printf("number not found in array!\n");
  }

  return 0;
}
