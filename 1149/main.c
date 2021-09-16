#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,q,i,n=0;
    scanf("%d %d",&p,&q);
    while(q < 0 || q ==0)
        scanf("%d",&q);
    for (i = 0;i < q;i++){
        n= n + p + i;
    }
    printf("%d\n",n);
    return 0;
}
