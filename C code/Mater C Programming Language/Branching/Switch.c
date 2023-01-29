
#include <stdio.h>

int main() {
  int weekday;

  printf("Enter weekday 0 - sunday, 1 - monday ..");
  scanf("%d", &weekday);

  switch(weekday) {
    case 0:
        printf("Sunday\n");
        break;
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    default:
        printf("Invalid weekday");
  }

  return 0;
}
