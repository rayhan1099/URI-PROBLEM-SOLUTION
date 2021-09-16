#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,x;
    int y;
    while(scanf("%f",&a)!='0'){
        if(a==0)
            break;
        scanf("%f %f", &b, &c);
        x = (((a*b)/c)*100);
        y=sqrt(x);
        printf("%d\n",y);
    }
    return 0;
}
