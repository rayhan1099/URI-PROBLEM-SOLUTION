#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a=0,k;
    for(k = 0;k < 100;k++){
        scanf("%d",&n);
        if(n==0)
        break;
        else if(n%2==0){
            for(i = n;i <= n+8;i=i+2)
            a=a+i;
        }
        else { n++;
            for(i =n;i <= n+8;i=i+2)
            a=a+i;
        }
        printf("%d\n",a);
        a=0;
}
    return 0;
}
