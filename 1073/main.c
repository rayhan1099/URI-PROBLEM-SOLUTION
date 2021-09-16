#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,i,k;
scanf("%d",&a);
for (i=1;i<=a;i++)
 {
  if(i%2==0){
            k=i*i;
   printf("%d^2 = %d\n", i,k);
  }
 }
return 0;
}
