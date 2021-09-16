#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,p,q;
    for(i=0;i<100;i++){
        scanf("%d%d",&p,&q);
        if(p==q)
        break;
        if(p>q)
            printf("Decrescente\n");
        else
         printf("Crescente\n");
    }
    return 0;
}
