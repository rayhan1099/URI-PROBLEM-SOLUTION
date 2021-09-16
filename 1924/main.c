#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int i,m;
    char c[102];
    while(scanf("%d",&m)!=EOF){
        getchar();
        for(i = 0;i < m;i++){
            gets(c);
        }
        printf("Ciencia da Computacao\n");
    }
    return 0;
}
