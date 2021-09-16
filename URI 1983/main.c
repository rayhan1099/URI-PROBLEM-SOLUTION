#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,n;
    int a,d;
    float b,c;
    while(scanf("%d",&n)!=EOF){
        c=0;
        for(i = 0;i < n;i++){
            scanf("%d %f",&a, &b);
            if(b>c){
                c=b;
                d=a;
            }
        }
        if(c<8)
            printf("Minimum note not reached\n");
        else
        printf("%d\n",d);
    }
    return 0;
}
