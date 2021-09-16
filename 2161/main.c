#include <stdio.h>
#include <stdlib.h>
int main()
{
    double n, a= 0.0;
    scanf("%lf", &n);
    while(n--)
    {
        a+=6.0;
        a= 1.0/a;
    }
    a+= 3.0;
    printf("%.10lf\n", a);
    return 0;
}
