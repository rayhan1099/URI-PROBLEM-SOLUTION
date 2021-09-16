#include <stdio.h>
#include <stdlib.h>
int main()
{
    double n, x, y, a;
    scanf("%lf", &n);
    x = (1 + sqrt(5))/2.0;
    y = (1 - sqrt(5))/2.0;
    a = (pow(x,n) - pow(y,n))/sqrt(5);
    printf("%.1lf\n", a);
    return 0;
}
