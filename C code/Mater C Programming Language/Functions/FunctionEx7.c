#include <stdio.h>

int fact(int n) {
  if (n > 1) {
    return n * fact(n-1);
  }
  return 1;
}

int main() {
  int n;

  printf("Enter n");
  scanf("%d", &n);

  printf("factorial is %d \n", fact(n));
  
  return 0;
}
