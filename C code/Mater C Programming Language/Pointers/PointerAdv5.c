#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

int invoke(int x, int y, int (*p)(int , int) ) {
  return p(x, y);
}

int main() {
  int n, m;
  n = invoke(10, 20, add);
  m = invoke(10, 20, sub);
  printf("%d \n", n);
  printf("%d \n", m);
  return 0;
}
