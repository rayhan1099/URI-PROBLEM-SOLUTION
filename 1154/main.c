#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j;
    float q,p=0;
    while(1){
        scanf("%d",&j);
        if(j<0)
            break;
        i = i + j;
        p++;
    }
    q= i/p;
    printf("%.2f\n",q);
    return 0;
}
