#include<stdio.h>
int main ()
{
    char StudentName[50];
    printf("Enter StudentName:\n");
    fgets(StudentName, sizeof(StudentName), stdin);
    printf("The Student Name is:\n");
    puts(StudentName);
    return 0;
}
