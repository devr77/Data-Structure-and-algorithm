
#include <stdio.h>

int main() {
  int n;
  int i, fact = 1;

  printf("Enter n");
  scanf("%d", &n);

  for (i = 1; i <= n; i = i + 1) {
    fact = fact * i;
  }

  printf("Factorial of %d is %d \n",n, fact);

  return 0;
}
