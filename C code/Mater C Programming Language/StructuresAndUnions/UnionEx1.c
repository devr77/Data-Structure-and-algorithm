#include <stdio.h>

union SampleUnion {
    int a; // 4
    float b; // 4
    double c; // 8
};

struct SampleStruct {
    int a;
    float b;
    double c;
};

int main() {

    union SampleUnion u;

    printf("Sizeof SampleUnion %lu \n", sizeof(union SampleUnion));

    printf("Sizeof SampleStruct %lu \n", sizeof(struct SampleStruct));

    u.a = 10;
    u.b = 20.3f;
    u.c = 30.2;

    printf("The value of a is %d \n ", u.a);
    printf("The value of b is %f \n ", u.b);
    printf("The value of c is %lf \n ", u.c);

    return 0;
}