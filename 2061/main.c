#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n, m;
    char tem[10];
    scanf("%d %d", &n, &m);
    int t = n;
    while(m--)
    {
        scanf("%s", tem);
        if(tem[0] == 'f')
            t++;
        else
            t--;
    }
    printf("%d\n", t);
    return 0;
}
