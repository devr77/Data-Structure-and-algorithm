#include <stdio.h>

int main() {
  int a, b, c, d, e, f, g;
  printf("Enter the value of a");
  scanf("%d", &a);
  printf("Enter the value of b");
  scanf("%d", &b);
  c = a + b;
  d = a - b;
  e = a * b;
  f = a / b;
  g = a % b;
  printf("value of c is %d\n", c);
  printf("value of d is %d\n", d);
  printf("value of e is %d\n", e);
  printf("value of f is %d\n", f);
  printf("value of g is %d\n", g);
  return 0;
}
