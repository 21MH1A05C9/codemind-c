#include<stdio.h>
int main()
{
    int n,i,arr[100],sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum1=sum1+arr[i];
        }
    }
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum2=sum2+arr[i];
        }
    }
    printf("%d",sum1-sum2);
}