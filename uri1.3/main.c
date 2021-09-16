#include <stdio.h>
#include <stdlib.h>

int main()
{char A[20];
double I,J,Total;
scanf("%s%lf%lf",&A,&I,&J);
Total=(J*0.15)+I;
    printf("TOTAL = R$ %.2lf\n",Total);
    return 0;
}
