#include<stdio.h>

int greatNum();       

int main()
{
    int result;
    result = greatNum();       
    printf("The greater number is: %d", result);
    return 0;
}

int greatNum()        
{
    int i, j, greaterNum;
    printf("Enter 2 numbers that you want to compare...");
    scanf("%d%d", &i, &j);
    if(i > j) {
        greaterNum = i;
    }
    else {
        greaterNum = j;
    }
    
    return greaterNum;
}