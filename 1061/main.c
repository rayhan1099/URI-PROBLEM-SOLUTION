#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,p;
   scanf("Dia %d", &a);
    scanf("%d : %d : %d\n", &b, &c, &d);
    scanf("Dia %d", &e);
    scanf("%d : %d : %d", &f, &g, &h);
   p=h-d;
   k=g-c;
    j=f-b;
    i=e-a;

    if(p<0)
    {
        p+=60;
        k--;
    }

    if(k<0)
    {
        k+=60;
        j--;
    }

    if(j<0)
    {
        j+=24;
        i--;
    }
  printf("%d dia(s)\n",i);
    printf("%d hora(s)\n",j);
    printf("%d minuto(s)\n",k);
    printf("%d segundo(s)\n",p);

    return 0;

}
