#include <stdio.h>
int main() {
  float radius = 0;
  printf("please enter the radius of circle:\n");
  scanf("%f", &radius);
  float area = 3.14 * radius * radius;
  printf("the area of radius is :%f\n", area);
  return 0;
}
