#include<stdio.h>
int main()
{
    int n,a[100],i,s=0,c=0,b,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b=a[i];
        s=0;
        while(b>0)
        {
            t=b%10;
            s=s*10+t;
            b=b/10;
        }
        if(s==a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}