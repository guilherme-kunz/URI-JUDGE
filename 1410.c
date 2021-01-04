#include <stdio.h>
int main()
{
    int A,D,i,j,k,l,n,tmp;
    while(1)
    {
        scanf("%d %d", &A, &D);
        if(A==0 && D==0) break;
        int atk[A], dfs[D];
        for(i=0; i<A; i++) scanf("%d", &atk[i]);
        for(i=0; i<D; i++) scanf("%d", &dfs[i]);
        for(i=0,n=1; i<A; i++){
            for(j=n; j<A; j++){
                if(atk[j]<atk[i]){
                    tmp=atk[j];
                    atk[j]=atk[i];
                    atk[i]=tmp;
                }
            }
            n++;
        }
        for(i=0,n=1; i<D; i++){
            for(j=n; j<D; j++){
                if(dfs[j]<dfs[i]){
                    tmp=dfs[j];
                    dfs[j]=dfs[i];
                    dfs[i]=tmp;
                }
            }
            n++;
        }
        if(atk[0]<dfs[0] || atk[0]<dfs[1])
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
