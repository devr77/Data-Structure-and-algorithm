
#include <stdio.h>

int main() {

  int a[10][10];
  int i, j;
  int m, n;

  printf("Enter matrix dimensions m and n ");
  scanf("%d %d", &m, &n);

  // read the values of the array
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("enter value for row : %d col : %d ", i, j);
      scanf("%d", &a[i][j]);
    }
  }

  // print the values
  printf("values are \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf(" %d ", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}
