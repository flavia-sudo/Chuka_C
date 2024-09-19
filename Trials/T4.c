#include <stdio.h>

int main()
{
    int Num1, Num2;
    float Num3, sum;
    double prod;
    printf("Enter numbers:\n");
    scanf("%d %d %f", &Num1, &Num2, &Num3);
    sum = Num1 + Num2 + Num3;
    prod = Num1 * Num2 * Num3;
    printf("The sum = %f\n", sum);
    printf("The product = %lf", prod);
    return 0;
}
