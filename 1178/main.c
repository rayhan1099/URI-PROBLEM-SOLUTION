#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i;
    double n;
    scanf("%lf",&n);
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,n);
        n/=2;
    }
    return 0;
}
