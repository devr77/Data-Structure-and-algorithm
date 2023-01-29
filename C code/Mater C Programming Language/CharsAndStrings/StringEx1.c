#include <stdio.h>

int main() {
  char name[20];
  int i;

  printf("Enter your name ");
  scanf("%s", name);

  printf("\n Hello ! %s \n ", name);

  printf("Print using a loop \n");
  i = 0;
  while (name[i] != '\0') {
    putchar(name[i]);
    i++;
  }
  printf("\n");

  return 0;
}
