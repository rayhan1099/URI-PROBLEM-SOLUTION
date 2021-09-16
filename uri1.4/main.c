#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,a,b;
float k,c,total,p,q;
scanf("%d%d%f%d%d%f",&i,&j,&k,&a,&b,&c);
p=j*k;
q=b*c;
total=p+q;

    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}
