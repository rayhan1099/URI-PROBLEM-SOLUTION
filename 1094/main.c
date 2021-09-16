#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,C=0,R=0,S=0,a,k;
    char b;
    double p,q,r;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %c",&a,&b);
        if (b == 'C')
            C = C + a;
        else if (b == 'R')
            R = R + a;
        else if (b == 'S')
            S = S + a;
    }
    k = R+C+S;
    p =(C*100.00)/k;
    q =(R*100.00)/k;
    r =(S*100.00)/k;
    printf("Total: %d cobaias\n",k);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2f %%\n",p);
    printf("Percentual de ratos: %.2f %%\n",q);
    printf("Percentual de sapos: %.2f %%\n",r);
    return 0;
}
