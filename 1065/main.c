#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a=0,i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            a=a+1;
        }
    }
    printf("%d valores pares\n",a);
    return 0;
}
