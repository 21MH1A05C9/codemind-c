#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int a[s],i,sum=0;
    for (i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<s;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}