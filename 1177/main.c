#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],n,k,p=0;
    scanf("%d",&n);
    for(k=0;k<1000;k++){
        printf("N[%d] = %d\n",k,p);
        p++;
        if(p==n)
            p=0;
    }
    return 0;
}
