#include <stdio.h>
int main()
{
    int r = 5;
    const float PIE = 3.14;
    double Area, Vol;
    Area = PIE*r*r;
    Vol = (4*Area*r)/3;
    printf("The Area = %lf\n", Area);
    printf("The Volume = %lf", Vol);
    return 0;
}
