#include <stdio.h>
#include <stdlib.h>

extern int add(int, int);

void print() {
    printf("added value %d \n ", add(100, 200));
}

int main() {
  print();
  return 0;
}

int add(int x, int y) {
    return x + y;
}