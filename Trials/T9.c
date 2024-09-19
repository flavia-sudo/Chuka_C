#include <stdio.h>

int main()
{
    int Num1, Num2;
    printf("Enter Numbers:\n");
    scanf("%d %d", &Num1, &Num2);
    if(Num1 > Num2)
    {
    printf("%d is the greatest number", Num1);
    }
    else
    {
    printf("%d is the greatest number", Num2);
    }
    return 0;
}
