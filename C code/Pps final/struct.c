//7. Wap to program to demonstrate global struct
#include <stdio.h>

struct StudentData{
    char *stu_name;
    int stu_id;
    int stu_age;
};

struct StudentData student;

int main()
{
     
     student.stu_name = "Dev";
     student.stu_id = 1234;
     student.stu_age = 30;

     /* Displaying the values of struct members */
     printf("Student Name is: %s", student.stu_name);
     printf("\nStudent Id is: %d", student.stu_id);
     printf("\nStudent Age is: %d", student.stu_age);
     return 0;
}