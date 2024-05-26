#include <stdio.h>

int main() {
  int enter = 0;
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr_length = sizeof(arr) / sizeof(arr[0]);
  int left = 0;
  int right = arr_length - 1;
  while (left <= right) {
    int mid = (right + left) / 2;
    if (enter < arr[mid]) {
      right = mid - 1;
    }
    if (enter > arr[mid]) {
      left = mid + 1;
    }
    if (enter == arr[mid]) {
      printf("the number has been found,the subscript is:%d\n", mid);
      break;
    }
  }
  if (left > right) {
    printf("number not found in array!\n");
  }
  return 0;
}
