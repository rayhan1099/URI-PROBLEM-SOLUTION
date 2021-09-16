#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,p,i,a[100];
    scanf("%d",&p);
    a[0]=0;
    a[1]=1;
    for(i = 2;i < p;i++){
        a[i] = a[i-2] + a[i-1];
    }
    printf("0");
    for(j = 1;j < p;j++){
        printf(" %d",a[j]);
    }
    printf("\n");
    return 0;
}

