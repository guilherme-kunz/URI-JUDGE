#include <stdio.h>
int main()
{
    int a,b;
    double s,t;
    scanf ("%d %d %lf", &a,&b,&s);
    t=s*b;
    printf ("NUMBER = %d\nSALARY = U$ %.2lf\n", a, t);
    return 0;
}
