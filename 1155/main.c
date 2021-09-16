#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float a=0,j=1.0;
    for (i = 1;i <=100;i++){
        a = a+(1/j);
        j++;
    }
    printf("%.2f\n",a);
    return 0;
}
