#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a[12][12],sum=0.0;
    int i,j,k,l,m,n;
    char x[2];
    scanf("%d %s",&k,&x);
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&a[i][j]);
        }
    }
    for(i = 0;i < 12;i++){
            sum=sum+a[i][k];
        }
    if(x[0]=='S')
        printf("%.1lf\n",sum);
    else if(x[0]=='M')
    printf("%.1lf\n",sum/12.0);
    return 0;
}
