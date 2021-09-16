#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,a;
    float x,y;
    scanf("%d",&a);
    for(k=0;k<a;k++){
    scanf("%f %f",&x,&y);
    if (x==0&&y==0)
      printf("0.0\n");
      else if(x==0)
    printf("0.0\n");
    else if(y==0)
    printf("divisao impossivel\n");
     else
    printf("%.1f\n",x/y);
    }
    return 0;
}
