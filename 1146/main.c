#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,k;
    while(1){
        scanf("%d",&n);
        if(n==0)break;
        printf("1");
        for(k = 2;k <= n;k++){
            printf(" %d",k);
        }
        printf("\n");
    }
    return 0;
}
