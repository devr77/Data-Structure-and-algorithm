#include <stdio.h>

int main() {
  int a, b, c;
  int avg;

  printf("Enter a");
  scanf("%d", &a);

  printf("Enter b");
  scanf("%d", &b);

  printf("Enter c");
  scanf("%d", &c);

  avg = (a + b + c) / 3;

  printf("Average is %d \n", avg);

  return 0;
}
