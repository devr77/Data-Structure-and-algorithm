#include <stdio.h>

void copy(int *dest, const int *src) {
  *dest = *src;
}
int main() {
  int a = 10, b = 20;
  const int * p = &a;
  printf("%d \n", *p);
  p = &b; // valid
  printf("%d \n", *p);
  return 0;
}
