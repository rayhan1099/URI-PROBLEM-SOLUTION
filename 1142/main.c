#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j=1,k=2,l=3;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        printf("%d %d %d PUM\n",j,k,l);
        j=j+4;
        k=k+4;
        l=l+4;
    }
    return 0;
}
