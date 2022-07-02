#include<stdio.h>
int main()
{
    int a[100],i,n,c=0,o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
        else
        {
            o++;
        }
    }
    printf("%d %d",c,o);
}