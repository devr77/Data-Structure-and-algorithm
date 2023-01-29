
#include <stdio.h>

int main() {
  int weekday;

  printf("Enter weekday 0 - sunday, 1 - monday ..");
  scanf("%d", &weekday);

  if (weekday  == 0 || weekday == 6) {
    printf("Enjoy");
    printf(" Weekend");
  }

  return 0;
}
