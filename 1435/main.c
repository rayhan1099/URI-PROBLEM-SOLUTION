#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,p;
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                p=i;
                if(j < p)
                p = j;
                if(n-i+1 < p)
                p = n-i+1;
                if(n-j+1 < p)
                p = n-j+1;
                printf("%3d",p);
                if(j < n)
                printf(" ");
                else printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
