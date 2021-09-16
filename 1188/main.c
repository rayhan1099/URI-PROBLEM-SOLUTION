#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a[12][12],sum=0.0;
    char b[2];
    scanf("%s",&b);
    int n=11,o=1,i,j;
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&a[i][j]);
        }
    }
    for(i = 11;i > 6;i--){

        for(j = o;j < n;j++){
            sum += a[i][j];
        }
        n--;
        o++;
    }
    if (b[0]=='S')
        printf("%.1lf\n",sum);
    else
     printf("%.1lf\n",sum/30.0);
    return 0;
}
