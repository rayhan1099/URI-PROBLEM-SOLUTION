#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,m,k,l;
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        int a[n][n];
        m=1;
        for(i = 0;i < n;i++){
            m=i+1;
            k=2;
            for(j = 0;j <= i;j++,m--){
                a[i][j]=m;
            }
            for(j=i+1;j<n;j++,k++){
                a[i][j]=k;
            }
            m++;
        }
        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                if(j==0)
                printf("%3d",a[i][j]);
                else
                printf(" %3d",a[i][j]);
            }printf("\n");
        }printf("\n");
    }
    return 0;
}
