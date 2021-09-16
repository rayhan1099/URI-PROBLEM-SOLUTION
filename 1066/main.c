#include <stdio.h>
#include <stdlib.h>

 int main()
{
    int a,n,j1=0,j2=0,j3=0,j4=0;
    for(a=1;a<=5;a++)
    {
        scanf("%d", &n);
        if(n%2==0)
            j1++;
        if(n%2==1||n%2==-1)
        j2++;
        if(n>0)
         j3++;
        if(n<0)
        j4++;
    }
    printf("%d valor(es) par(es)\n",j1);
    printf("%d valor(es) impar(es)\n",j2);
    printf("%d valor(es) positivo(s)\n",j3);
    printf("%d valor(es) negativo(s)\n",j4);

    return 0;
}
