#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,p=1,c=0,i;
    scanf("%d %d",&a,&b);
    while(a>=b){
        scanf("%d",&b);
    }
    for(i=a;i<b;i++){
        c=c+i;
        if(c>b)
        break;
        p++;
    }
    printf("%d\n",p);
    return 0;
}
