#include<stdio.h>

int greatNum(int a, int b);      

int main()
{
    int i, j, result;
    printf("Enter 2 numbers that you want to compare...");
    scanf("%d%d", &i, &j);
    result = greatNum(i, j); 
    printf("The greater number is: %d", result);
    return 0;
}

int greatNum(int x, int y)    
{
    if(x > y) {
        return x;
    }
    else {
        return y;
    }
}