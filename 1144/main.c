#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,k;
    scanf("%d",&a);
    for(k=1;k<=a;k++)
    {
        printf("%d %d %d\n",k,(k*k),(k*k*k));
        printf("%d %d %d\n",k,(k*k)+1,(k*k*k)+1);
    }
    return 0;
}
