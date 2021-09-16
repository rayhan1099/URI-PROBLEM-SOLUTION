#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    scanf("%d",&a);
    if ( a%2==0)
        a=a+1;
    for(i = 0; i < 6; i++)
    {
        printf("%d\n",a);
        a = a+ 2;
    }

    return 0;
}
