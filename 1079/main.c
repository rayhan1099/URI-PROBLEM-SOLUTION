#include <stdio.h>
#include <stdlib.h>


int main()
{
 int n,k;
 float p,q,r,ave;
scanf("%d", &n);
for (k=0; k< n;k++)
 {
  scanf("%f",&p);
 ave= ((p/10) * 2);
 printf("%.1f\n", ave);
 }

 return 0;
}
