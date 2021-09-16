#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int n;
    double j,k;
    scanf("%d",&n);
    j=n/log(n);
    k=1.25506*n/log(n);
    printf("%.1f %.1f\n",j,k);
    return 0;
}
