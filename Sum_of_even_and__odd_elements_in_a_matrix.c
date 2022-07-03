#include<stdio.h>
int main()
{
    int i,j,m,n,a[100][100],s=0,s1=0;
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
            if(a[i][j]%2==0)
            {
                s+=a[i][j];
            }
            else
            {
                s1+=a[i][j];
            }
        }
    }
    printf("%d %d",s,s1);
}