#include <stdio.h>
#include <stdlib.h>

#include "MyMathLib.c"

int main() {

  printf("added value %d \n", add(100, 200));

  printf("subtracted value %d \n ", sub(100, 200));

  printf("division result value %d \n ", divison(200, 100));
   
  return 0;
}
