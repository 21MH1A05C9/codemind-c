#include<stdio.h>
int main()
{
    int n,i,a[100],c=0,f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            f=i;
            break;
        }
    }
    for(i=0;i<f;i++)
    {
        c+=a[i];
    }
    printf("%d",c);
}