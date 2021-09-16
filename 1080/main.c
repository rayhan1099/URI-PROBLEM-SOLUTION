#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k=0,p,a[100];
    for (i =0;i <100;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=100;i++){
            if(a[i] > k){
                k= a[i];
                p= i+1;
            }
    }
    printf("%d\n%d\n",k,p);

    return 0;
}
