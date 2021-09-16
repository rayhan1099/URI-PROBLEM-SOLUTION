#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,q;
    for(p=1;p < 10;p=p+2){
        for(q=7;q>=5;q--){
            printf("I=%d J=%d\n",p,q);
        }
    }
    return 0;
}
