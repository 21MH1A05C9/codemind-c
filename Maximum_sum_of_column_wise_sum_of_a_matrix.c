#include<stdio.h>
int main()
{
    int r,c,i,j,s=0,k=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        s=0;
        for(j=0;j<r;j++)
        {
            s+=a[j][i];
        }
        if(k<s)
        {
            k=s;
        }
    }
    printf("%d",k);
}