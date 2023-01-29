#include <stdio.h>

// global variable
int n;

void read() {
  printf("Enter n");
  scanf("%d", &n);
}

void print() {
  printf("Value of n is %d\n", n);
}

int main() {

  read();
  print();

  return 0;
}
