#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float a=0,j=1;
    for(i = 1;i <= 39;i=i+2){
        a = a+(i/j);
        j = j+j;
    }
    printf("%.2f\n",a);
    return 0;
}
