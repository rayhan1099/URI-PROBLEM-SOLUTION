#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,b=0,c=0,d=0,e,k;
    printf("MUITO OBRIGADO\n");
    for(k=0;k<100;k++){
        scanf("%d",&n);
        if (n>=1&&n<=3){
            if(n==1)
                  b++;
            else if(n==2)
            c++;
            else if(n==3)
            d++;
        }
        else if(n==4)
            break;
    }
    printf("Alcool: %d\n",b);
    printf("Gasolina: %d\n",c);
    printf("Diesel: %d\n",d);
    return 0;
}
