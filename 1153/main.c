#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a=1;
    scanf("%d",&n);
    for(i =1;i<=n;i++){
        a = a*i;
    }
    printf("%d\n",a);
    return 0;
}
