#include<stdio.h>
int main()
{
    int i,n,a[100],v=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c,b;
    scanf("%d%d",&c,&b);
    for(i=0;i<n;i++)
    {
        if(a[i]>b || a[i]<c)
        {
            v++;
            printf("%d ",a[i]);
        }
    }
    if(v==0)
    {
        printf("-1");
    }
}