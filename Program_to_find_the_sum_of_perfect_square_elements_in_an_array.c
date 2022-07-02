#include<stdio.h>
int ps(int n )
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(n==i*i)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int i,n,a[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ps(a[i]))
        {
            c+=a[i];
        }
    }
    printf("%d",c);
}