#include <stdio.h>

int main(void) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int enter = 0;
  printf("please enter your number");
  scanf("%d", &enter);
  int left = 0;
  int right = sizeof(arr) / sizeof(arr[0]) - 1;
  while (left <= right) {
    int mid = (right - left) / 2 + left;
    if (enter < arr[mid]) {
      right = mid - 1;
    } else if (enter > arr[mid]) {
      left = mid + 1;
    } else if (enter == arr[mid]) {
      printf("the number has been found!the number of subscript is %d\n", mid);
      break;
    }
  }
  if (left > right) {
    printf("the number is not in arrary\n");
  }
  return 0;
}
