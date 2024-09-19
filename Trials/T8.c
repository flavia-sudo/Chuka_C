#include <stdio.h>

int main()
{
    int age;
    printf("Enter Employees age:\n");
    scanf("%d", &age);
    printf("Age = %d\n", age);
    if(age > 60)
    {
    printf("RETIRE");
    }
    else
    {
    printf("CONTINUE WORKING");
    }
    return 0;
}
