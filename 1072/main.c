#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,p=0,q=0;
     scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &j);
        if(j >=10 && j <= 20){
            p=p+1;
        }else{
            q=q+1;
        }

    }
    printf("%d in\n", p);
    printf("%d out\n",q);

    return 0;
}
