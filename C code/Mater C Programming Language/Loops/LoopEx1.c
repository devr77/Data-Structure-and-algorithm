
#include <stdio.h>

int main() {
  int n;
  int i;

  printf("Enter n");
  scanf("%d", &n);

  i = 1;
  while (i <= n) {
    printf("%d ", i);
    i = i + 1;
  }

  return 0;
}
