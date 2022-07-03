#include<stdio.h>
int main()
{
    int n,i,j,k,a[100],b[100],s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        s[i]=a[i]+b[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",s[i]);
    }
}