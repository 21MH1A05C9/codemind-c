#include<stdio.h>
int main()
{
    int i,j,m,n,s=0,s1=0,a[100][100];
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
            if(i%2==0)
            {
                s+=a[i][j];
            }
            if(i%2!=0)
            {
                s1+=a[i][j];
            }
        }
    }
    printf("%d %d",s,s1);
}