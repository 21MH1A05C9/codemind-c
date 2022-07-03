#include<stdio.h>
int main()
{
    int n,a[100],i,s=0,c,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&c,&b);
    for(i=0;i<n;i++)
    {
        if(a[i]>=c&&a[i]<=b)
        {
            s+=a[i];
        }
    }
    printf("%d",s);
}