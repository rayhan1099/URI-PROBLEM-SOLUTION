#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,k;

 scanf("%d", &a);

 for (k=1;k <= 10000; k++)
 {
  if(k%a ==2){
   printf("%d\n",k);
  }
 }

 return 0;
}
