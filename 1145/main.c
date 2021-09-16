#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,i,j,k,q,p=1;
    scanf("%d %d",&a,&n);
    k= n/a;
    q=a;
    for(i=1;i<=k;i++){
            printf("%d",p);
        for(j=p+1;j<=q;j++){
            printf(" %d",j);
        }
        printf("\n");
        p=p+a;
        q=q+a;
    }
    return 0;
}
