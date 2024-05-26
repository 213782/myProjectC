#include <stdio.h>

int main(void) {
  int year_enter = 0;
  printf("enter your year:\n");
  scanf("%d", &year_enter);
  if (year_enter % 4 == 0 && year_enter % 100 != 0) {
    printf("your enter year is leap year\n");
  } else if (year_enter % 400 == 0) {
    printf("your enter year is leap year\n");
  } else {
    printf("your enter year is not leap year\n");
  }

  return 0;
}
