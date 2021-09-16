#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,n,i,x1,x2,a,b;
    while(scanf("%d",&p)!= EOF){
        b=0;
        scanf("%d",&n);
        int r[n];
        for(i = 0;i < n;i++){
            scanf("%d",&r[i]);
        }
        for(i = 1;i < n;i++){
            a=r[i]-r[i-1];
            if(a<0)
                a*=-1;
            if(a>p){
                b=1;
                break;
            }
        }
        if(b==1)
            printf("GAME OVER\n");
        else printf("YOU WIN\n");
    }
    return 0;
}
