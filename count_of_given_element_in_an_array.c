#include<stdio.h>
int main()
{
    int n,i,a[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b;
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(b==a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}