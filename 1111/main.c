#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a,b,x=0,c;
    for(i=0; i<100; i++)
    {
        scanf("%d %d",&a,&b);
        if(a<= 0 || b<= 0)
            break;
        if(a>b)
        {
            c=a;
            a=b;
            b=c;
        }
        for(j=a; j<=b; j++)
        {
            printf("%d ",j);
            x = x + j;
        }
        printf("Sum=%d\n",x);
        x = 0;

    }
    return 0;
}
