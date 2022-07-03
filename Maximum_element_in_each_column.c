#include<stdio.h>
int main()
{
    int m,n,i,j,a[100][100],m2=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        m2=0;
        for(j=0;j<m;j++)
        {
            if(a[j][i]>m2)
            {
                m2=a[j][i];
            }
        }
        printf("%d
",m2);
    }
}