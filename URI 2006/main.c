#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m , i, t=0;
    scanf("%d", &n);
    for(i=0; i<5; i++)
    {
        scanf("%d", &m);
        if(m==n)
            t++;
    }
    printf("%d\n", t);
    return 0;
}
