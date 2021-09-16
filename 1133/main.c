#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,j,k;
    scanf("%d%d",&a, &b);
    if(a>b){
    k=a;
    a=b;
    b=k;
    }
    a++;
    for(j=a;j<b;j++){
        if(j%5==2||j%5==3)
        printf("%d\n",j);
    }
    return 0;
}


