#include <stdio.h>
#include <stdlib.h>

int main()
{
 float n;
 int a = 0, i;
 for (i = 0; i < 6; ++i)
 {
  scanf("%f", &n);
  if(n > 0){
   a++;
  }
 }
printf("%d valores positivos\n",a);

 return 0;}
