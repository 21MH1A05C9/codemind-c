#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d",&N);
    scanf("%d",&M);
    int Matrix[N][M];
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            scanf("%d",&Matrix[i][j]);
            
    int Row=0;
    for(int i=0;i<N;i++)
    {
        int sum=0;
        for(int j=0;j<M;j++)
            sum=sum+Matrix[i][j];
        if(Row<sum)
            Row=sum;
    }
    int Column=0;
    for(int i=0;i<M;i++)
    {
        int sum=0;
        for(int j=0;j<N;j++)
            sum=sum+Matrix[j][i];
        if(Column<sum)
            Column=sum;
    }
    if(Row>=Column)
    {
        printf("%d",Row);
    }
    else
    {
        printf("%d",Column);
    }
    return 0;
}