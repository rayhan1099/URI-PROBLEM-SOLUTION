#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j,p;
    scanf("%d",&n);

    for(j=0; j<n; j++)
    {
        scanf("%d",&p);

        if(p==0)
            printf("NULL\n");
        else if(p%2==0 && p>0)
            printf("EVEN POSITIVE\n");
        else if(p%2==0 && p<0)
            printf("EVEN NEGATIVE\n");
        else if(p%2!=0 && p>0)
            printf("ODD POSITIVE\n");
        else if(p%2!=0 && p<0)
            printf("ODD NEGATIVE\n");
    }
    return 0;
}

