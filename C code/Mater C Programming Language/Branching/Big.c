
#include <stdio.h>

int main() {
  int a, b;

  printf("Enter a");
  scanf("%d", &a);

  printf("Enter b");
  scanf("%d", &b);

  if ( ! (a <= b))
     printf("%d is big\n", a);
  else
     printf("%d is big\n", b);

  return 0;
}
