#include <stdio.h>

void sort(int b[], int n, int (*customCompare)(int, int)) {
  int i, j, temp;
  for (i = 0; i < n-1; i++) {
    for (j = i + 1; j < n; j++) {
      if (customCompare(b[i], b[j]) > 0) {
        temp = b[i];
        b[i] = b[j];
        b[j] = temp;
      }
    }
  }
}

void print(int b[], int n) {
  int i;
  printf("\n");
  for (i = 0; i < n; i++) {
    printf("%d ", b[i]);
  }
}

int ascComparion(int a, int b) {
  return a - b;
}

int descComparion(int a, int b) {
  return b - a;
}

int main() {
  int arr[] = {1, 20, 2, 19, 5};
  int n = 5;
  sort(arr, n, ascComparion);
  print(arr, n);
  printf("\n");
  sort(arr, n, descComparion);
  print(arr, n);
  return 0;
}
