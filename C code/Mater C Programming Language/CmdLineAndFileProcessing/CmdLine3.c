
/*
A small command line utility to copy the content of one file to the other.

input: copy       a.txt     b.txt
       argv[0]    argv[1]   argv[2]
copied.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

  FILE * srcFile, * destFile;
  char ch;

  if (argc != 3) {
      printf("Usage ! copy <srcFile>  <destFile> \n ");
      exit(1);
  }

  srcFile = fopen(argv[1], "r");

  if (srcFile == NULL) {
      printf("%s file doesn't exist \n", argv[1]);
      exit(1);
  }

  destFile = fopen(argv[2], "w");

  if (destFile == NULL) {
      printf("%s could not be opened for writing \n", argv[2]);
      exit(1);
  }

  while( (ch = fgetc(srcFile)) != EOF)
    fputc(ch, destFile);

  fclose(srcFile);
  fclose(destFile);

  return 0;
}
