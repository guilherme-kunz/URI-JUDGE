#include <stdio.h>
int main()
{
    int N,a,b;
    scanf("%d", &N);
    for(a=1;a<=10;a++)
    {
        b=a*N;
        printf("%d x %d = %d\n",a,N,b);
    }
    return 0;
}
