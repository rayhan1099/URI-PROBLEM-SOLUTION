#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[150];
    int i, t=0;
    gets(s);
    for(i=0; s[i]; i++)
        if(s[i]=='1')
            t++;
    if(t%2 == 0)
        s[i] = '0';
    else
        s[i] = '1';
    s[i+1] = '\0';
    puts(s);
    return 0;
}

