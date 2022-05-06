#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    scanf("%d",&n);
    int arr[100],i;
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%.2f",(sum/n));
}