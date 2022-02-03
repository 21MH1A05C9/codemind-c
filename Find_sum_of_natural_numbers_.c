#include<stdio.h>
int main()
{
    int i,l,sum=0;
    scanf("%d",&l);
    for(i=1;i<=l;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return (0);
}