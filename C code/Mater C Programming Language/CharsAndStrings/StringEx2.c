#include <stdio.h>
#include <ctype.h>

int main() {
  char s[20];
  int i, count;
  printf("Enter the text");
  scanf("%s", s);

  i = 0;
  count = 0;

  while (s[i] != '\0') {

    switch(toupper(s[i])) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U': count++;
                break;
    }

    i++;
  }

  printf("Number of vowels found are %d \n", count);

  return 0;
}
