#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i, n=0;
    scanf("%d %d",&a,&b);
    for(i=b+1; i<a; i++)
    {
        if(i%2!=0)
        {
            n=n+i;
        }
    }
    printf("%d\n",n);
    return 0;
}
