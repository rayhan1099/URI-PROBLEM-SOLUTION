#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    int i,n;
    int a,b;
    char str1[101],str2[6],str3[101],str4[6];
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%s %s %s %s",str1,str2,str3,str4);
        scanf("%d %d",&a,&b);
        a += b;
        if(str2[0]=='I'){
            if(a%2==0)
                printf("%s\n",str3);
            else printf("%s\n",str1);
        }
        else {
            if(a%2==0)
                printf("%s\n",str1);
            else
             printf("%s\n",str3);
        }
    }
    return 0;
}
