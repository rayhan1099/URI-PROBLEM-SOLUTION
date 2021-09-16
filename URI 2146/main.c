#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    while(scanf("%d", &n)!= EOF)
    {
        printf("%d\n", n-1);

        if(n == 9999)
        {
            break;
        }
    }

    return 0;
}
