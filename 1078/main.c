#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,k,p;
 scanf("%d",&n);
 for (k=1;k<=10;k++) {
            p=k*n;
  printf("%d x %d = %d\n", k,n,p);
 }
return 0;
}
