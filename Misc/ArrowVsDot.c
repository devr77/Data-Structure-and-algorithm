#include<stdio.h>

int main()
{
    struct Student{
       int rollnum;
       char *name;
       float marks;
    };

    struct Student student1 = {1,"Dev",75.4};
    printf("Accessing Structure member using Structure variable and dot operators\n");
    printf("Student1 RollNo = %d\n",student1.rollnum);
    printf("Student1 name = %s\n",student1.name);
    printf("Student1 marks = %f\n",student1.marks);
    printf("\n");

    struct Student *ptrStudent1 = & student1;
    printf("Accessing Structure member using Pointer variable and arrow operators\n");
    printf("Student1 RollNo = %d\n",ptrStudent1->rollnum);
    printf("Student1 name = %s\n",ptrStudent1->name);
    printf("Student1 marks = %f\n",ptrStudent1->marks);
    printf("\n");

    return 0;
}
