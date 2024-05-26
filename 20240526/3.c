#include <stdio.h>
#include <string.h>

int main() {
  char arr1[] = "asdfgh";
  char arr2[] = {'a', 'b', 'c', 'd', '\0'};
  int num = strlen(arr1);
  printf("%d\n", num);

  printf("\a");
  printf("%s\n", arr1);
  printf("%s\n", arr2);
  return 0;
}
