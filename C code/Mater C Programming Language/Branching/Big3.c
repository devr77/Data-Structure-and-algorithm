
#include <stdio.h>

int main() {
  int a, b, c;

  printf("Enter a");
  scanf("%d", &a);

  printf("Enter b");
  scanf("%d", &b);

  printf("Enter c");
  scanf("%d", &c);

  if (a > b && a > c)
     printf("%d is big\n", a);
  else
  if (b > c)
     printf("%d is big\n", b);
  else
     printf("%d is big\n", c);

  return 0;
}
