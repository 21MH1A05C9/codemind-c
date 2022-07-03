#include<stdio.h>
int main()
{
    int n,a1[100],i,a,b,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(m<a1[i])
        {
            m=a1[i];
        }
    }
    if(m>=a&&m<=b)
    {
        printf("-1");
    }
    else
    {
        printf("%d",m);
    }
}