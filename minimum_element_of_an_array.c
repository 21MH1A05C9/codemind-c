#include<stdio.h>
int main()
{
    int n,i,a[100],mi;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mi=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<mi)
        {
            mi=a[i];
        }
    }
    printf("%d",mi);
}