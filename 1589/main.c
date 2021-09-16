#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q,i,a,b;
    scanf("%d",&q);
    for(i = 0;i < q;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
    return 0;
}
