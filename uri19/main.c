#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n;
    int j,k,p,q,a,b,c,d,e,f,g,h,l,m,o,r,s,t,u,pq,pr,rp,ri,tt,pp;
    scanf("%lf",&n);
    tt=n;
    pp=(n-tt)*100;
    j=tt/100;
    k=tt%100;
    p=k/50;
    q=k%50;
    a=q/20;
    b=q%20;
    c=b/10;
    d=b%10;
    e=d/5;
    f=d%5;
    pr=f/2;
    pq=f%2;
    g=pq/1;
    h=pq%1;
    l=pp/50;
    m=pp%50;
    o=m/25;
    r=m%25;
    s=r/10;
    rp=r%10;
    ri=rp/5;
    t=rp%5;
    u=t/1;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",j,p,a,c,e,pr);
           printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",g,l,o,s,ri,u);
           return 0;
}
