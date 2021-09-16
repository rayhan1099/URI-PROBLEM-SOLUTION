#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,n,a;
    float b[7]={1.50,2.50,3.50,4.50,5.50},p;
    while(scanf("%d",&n)!=EOF){
        p=0;
        for(i = 0;i < n;i++){
            scanf("%d %d",&k, &a);
            k=k%1000;
            p+= a * b[k-1];
        }
        printf("%.2f\n",p);
    }
    return 0;
}
