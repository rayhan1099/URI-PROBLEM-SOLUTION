#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,j,k=0,p,q;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d %d",&p,&q);
        if(p%2==0)
            p++;
        for(j = 0;j < q;j++){
            k= k+p;
            p=p+2;
        }
        printf("%d\n",k);
        k=0;
    }
    return 0;
}
