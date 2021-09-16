#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a,b;
    scanf("%f", &a);
    if(a>=0 && a<=2000)
        printf("Isento\n");
    else if(a>=2000.01 && a<=3000)
    {
        a-=2000;
        b= a*.08;
        printf("R$ %.2f\n",b);
    }
    else if(a>=3000.01 && a<=4500)
    {
        a-=3000;
        b= a*.18+80;
        printf("R$ %.2f\n",b);
    }
    else
    {
        a-=4500;
        b= a*.28+350;
        printf("R$ %.2f\n",b);
    }
    return 0;
}
