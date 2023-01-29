#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAX_LENGTH 100
#define NUM_STRINGS 10

int main(){
    char *arr3[NUM_STRINGS] = { "first string",
                                "second string",
                                "third string",
                                "fourth string",
                                "fifth string" };
    char* str1 = "string literal";
    arr3[8] = str1;
    arr3[9] = "hello there";

    for (int i = 0; i < NUM_STRINGS; ++i) {
        printf("%s, ", arr3[i]);
    }
    printf("\n");

    exit(EXIT_SUCCESS);
}