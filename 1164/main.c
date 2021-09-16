#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,p,j,k=0;
    scanf("%d",&n);
    for(i = 0;i<n;i++){
        scanf("%d",&p);
        for(j=1;j<p;j++){
            if(p%j==0)
                k=k+j;
        }
        if(k==p)
            printf("%d eh perfeito\n",p);
        else
         printf("%d nao eh perfeito\n",p);
        k=0;
    }
    return 0;
}
