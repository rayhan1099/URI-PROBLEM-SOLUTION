#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a[12][12],sum=0.0;
    char b[2];
    scanf("%s",&b);
    int n=10,i,j;
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&a[i][j]);
        }
    }
    for(i = 1;i < 12;i++){

        for(j = 11;j > n;j--){
            sum += a[i][j];
        }
        n--;
    }
    if (b[0]=='S')
        printf("%.1lf\n",sum);
    else
    printf("%.1lf\n",sum/66.0);
    return 0;
}
