#include <stdio.h>

int fact(int n) {
  int i, f = 1;
  for (i = 1; i <= n; i++) {
    f *= i;
  }
  return f;
}

int ncr(int n, int r) {
  return fact(n)/(fact(n-r) * fact(r));
}

void printCoef(int n) {
  int r;
  for (r = 0; r <= n; r++) {
    printf(" %d ", ncr(n, r));
  }
}

int main() {
  int n;

  printf("Enter n");
  scanf("%d", &n);

  printCoef(n);

  return 0;
}
