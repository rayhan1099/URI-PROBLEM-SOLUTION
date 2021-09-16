#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j=0,k=0,l,n,p[5],q[5];
    for(i = 0;i < 15;i++){
        scanf("%d",&n);
        if(n%2==0){
            p[j]=n;
            j++;
            if(j==5){
                for(l = 0;l < 5;l++){
                    printf("par[%d] = %d\n",l,p[l]);
                    p[l]=0;
                    j=0;
                }
            }
        }
        else {
            q[k]=n;
            k++;
            if(k==5){
                for(l = 0;l < 5;l++){
                    printf("impar[%d] = %d\n",l,q[l]);
                    q[l]=0;
                    k=0;
                }
            }
        }
    }
    for(i = 0;i < 5;i++){
        if(q[i]==0)
            break;
        printf("impar[%d] = %d\n",i,q[i]);
    }
     for(i = 0;i < 5;i++){
        if(p[i]==0)
            break;
        printf("par[%d] = %d\n",i,p[i]);
    }
    return 0;
}
