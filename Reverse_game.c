#include<stdio.h>
int main()
{
    int n,a[100],i,s=0,c=0,b,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b=a[i];
        a[s]=0;
        while(b>0)
        {
            t=b%10;
            a[s]=a[s]*10+t;
            b=b/10;
        }
        printf("%d ",a[s]);
    }
}