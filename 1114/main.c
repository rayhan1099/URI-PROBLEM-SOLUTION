#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,p;
    for(j=0;j<100;j++){
        scanf("%d",&p);
        if(p==2002)
        printf("Acesso Permitido\n");
            else
            printf("Senha Invalida\n");
        if(p==2002)
        break;
    }
    return 0;
}
