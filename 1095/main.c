#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=1,j;
    for(j = 60;j >= 0;j = j - 5){
        printf("I=%d J=%d\n",k,j);
        k= k+ 3;
    }
    return 0;
}
