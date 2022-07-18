#include<stdio.h>
int main()
{
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m,c,c1;
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            c=i;
            break;
        }
    }
    if(a[i]!=m)
    {
        printf("-1 ");
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            c1=i;
        }
    }
    if(a[c1]==m)
    {
        printf("%d %d",c,c1);
    }
    else
    {
        printf("-1");
    }
}