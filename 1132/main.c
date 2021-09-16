#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c=0,i,k;
    scanf("%d %d",&a, &b);
    if(a > b)
      {k= a;
    a = b;
    b =k;}
    for(i =a;i<= b;i++){
        if(i%13!= 0)
        c=c+i;
    }
    printf("%d\n",c);
    return 0;
}
