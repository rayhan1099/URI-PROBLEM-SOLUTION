#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b=0,c,d;
    int k,m=1;
    while(1)
    {
        a=0;
        d=0;
        while(1)
        {
            if(a==2)
                break;
            scanf("%f",&c);
            if(c>=0 && c<=10)
            {
                a++;
                d=d+c;
            }
            else
                printf("nota invalida\n");
        }
        d=d/2;
        printf("media = %.2f\n",d);
        printf("novo calculo (1-sim 2-nao)\n");

        while(1)
        {
            scanf("%d",&k);
            if(k!=1 && k!=2)

                printf("novo calculo (1-sim 2-nao)\n");
            else
                break;
        }
        if(k==2)
            break;
    }
  return 0;

}
