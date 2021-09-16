#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,k;
    for(k=0;k< 100;k++){
    scanf("%d %d",&x,&y);
    if (x==0 || y==0)
    break;
    else if (x>0 && y>0)
      printf("primeiro\n");
    else if (x<0 && y>0)
    printf("segundo\n");
    else if (x<0 && y<0)
    printf("terceiro\n");
    else if (x>0 && y<0)
    printf("quarto\n");
    }
    return 0;
}
