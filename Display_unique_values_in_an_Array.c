#include<stdio.h>
int main()
{
    int n,i,j,c,x=0,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if((i!=j)&&(a[j]==a[i]))
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d ",a[i]);
        }
        else
        {
            x++;
        }
    }
    if(x==n)
    {
        printf("-1");
    }
}