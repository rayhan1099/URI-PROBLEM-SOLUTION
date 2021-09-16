#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n=1,r,p,v,a,b;
    scanf("%d %d",&r,&a);
    for(i = 1; i <r; i++)
    {
        n++;
        scanf("%d",&b);
        if(i==0)
        {
            if(a < b)
            {
                v = a;
                p = n;
            }
            else
            {
                v=b;
                p=n;
            }
        }
        else
        {
            if(b < v)
            {
                v=b;
                p=n;
            }
        }
    }
    printf("Menor valor: %d\n",v);
    printf("Posicao: %d\n",p-1);
    return 0;
}
