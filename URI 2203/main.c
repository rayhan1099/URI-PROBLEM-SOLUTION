#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x1, y1, x2, y2, v, r1, r2, X, Y, D, R;
    while(scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF)
    {
        scanf("%lf%lf%lf", &v, &r1, &r2);
        X = (x2-x1)*(x2-x1);
        Y = (y2-y1)*(y2-y1);
        D= sqrt(X+Y);
        D+= v*1.50;
        R= r1+r2;
        if(D> R)
            printf("N\n");
        else
            printf("Y\n");
    }
    return 0;
}
