#include<stdio.h>
int main()
{
    int a[100],n,i,k,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        s+=a[i];
    }
    printf("%d",s);
}