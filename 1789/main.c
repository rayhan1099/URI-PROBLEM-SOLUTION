#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a,k,q;
    while(scanf("%d",&n)!=EOF){
        k=0;
        for(i = 0;i < n;i++){
            scanf("%d",&a);
            if(a>k)
                k=a;
        }
        if(k<10)
            q=1;
        else if(k>=20)
        q=3;
        else
        q=2;
        printf("%d\n",q);
    }
    return 0;
}
