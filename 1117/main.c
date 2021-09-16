#include <stdio.h>
#include <stdlib.h>

int main()
{int i;
    float a,b=0,d=0,k;
    for(i=0;i<100;i++)
    {
        if(d==2)
        {
            break;
        }
        scanf("%f",&a);
        if(a>=0 && a<=10)
        {
           b=b+a;
           d++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    k=b/2;
    printf("media = %.2f\n",k);
    return 0;
}
