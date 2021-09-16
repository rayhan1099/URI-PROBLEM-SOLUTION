#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,n;
    while(scanf("%d",&a)!=EOF){
        scanf("%d %d",&b, &c);
        d = a + b + c;
        if(d==24)
            d=0;
        else if(d>24)
        d -= 24;
        else if(d<0)
        d += 24;
        printf("%d\n",d);
    }
    return 0;
}
