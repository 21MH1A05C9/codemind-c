#include<stdio.h>
int main()
{
    int N,M,K=0;
    scanf("%d",&N);
    scanf("%d",&M);
    int Matrix[N][M];
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            scanf("%d",&Matrix[i][j]);
    for(int i=0;i<N;i++)
    {
        int sum=0;
        for(int j=0;j<M;j++)
            sum=sum+Matrix[i][j];
        if(K<sum)
        {
            K=sum;
        }
    }
    printf("%d",K);
    
}