#include<stdio.h>
#include<string.h>

int main()
{
    char c[10];
    int n=0,k=0;
    for(;k!=3;){
        gets(c);
        if(c[0]=='*'){
            if(c[1]=='-'){
                if(c[2]=='-')
                    n= n+4;
                else n= n+5;
            }
            else {
                if(c[2]=='-')
                    n= n+6;
                else n=n+7;
            }
        }
        else if(c[0]=='-'){
            if(c[1]=='-'){
                if(c[2]=='-')
                    n=n+0;
                else n=n+1;
            }
            else {
                if(c[2]=='-')
                    n=n+2;
                else n=n+3;
            }
        }
        if(c[0]=='c')
            {
            printf("%d\n",n);
            k++;
            n=0;
        }
    }
    return 0;
}
