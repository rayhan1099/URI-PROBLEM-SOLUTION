#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a,n,k=0;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&a);
        if(a==1 || a==2)
            printf("%d eh primo\n",a);
        else if (a > 2){
                for(j = 2;j < a;j++){
            if(a%j==0){
            k=2;
            break;
            }
            else k=1;
    }
       if(k==2)
        printf("%d nao eh primo\n",a);
       else if(k==1)
       printf("%d eh primo\n",a);
    }
    }
    return 0;
}

