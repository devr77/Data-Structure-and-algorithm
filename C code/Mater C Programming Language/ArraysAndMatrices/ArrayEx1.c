#include <stdio.h>

int main() {

  int a[3];
  int i;

  for (i = 0; i < 3; i++) {
    printf("Enter %d element ", i);
    scanf("%d", &a[i]);
  }

  for (i = 0; i < 3; i++) {
    printf("value of a[%d] is %d \n", i, a[i]);
  }

  return 0;
}
