#include<stdio.h>
int main()
{
    int m,n,i,j,s=0,a[100][100];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((j==m-1-i)||(i==j))
            {
                s+=a[i][j];
            }
        }
    }
    printf("%d",s);
}