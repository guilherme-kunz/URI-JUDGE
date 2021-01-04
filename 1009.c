#include <stdio.h>
int main()
{
    char M[100];
    scanf ("%s", M);
    double a,b,c;
    scanf("%lf %lf", &a,&b);
    c=a+(b*15)/100;
    printf ("TOTAL = R$ %.2lf\n",c);
    return 0;
}
