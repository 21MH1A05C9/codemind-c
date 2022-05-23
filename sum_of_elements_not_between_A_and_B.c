#include<stdio.h>
int main()
{
    int d,b,i,a[1000],n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&d,&b);
    for(i=0;i<n;i++)
    {
        if(a[i]<d||a[i]>b)
        {
            c+=a[i];
        }
    }
    printf("%d",c);
}