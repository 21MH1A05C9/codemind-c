#include<stdio.h>
int main()
{
    int n,i,a=0,b=0,a1=0,b1=0;
    int a2[3],b2[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a2[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b2[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a2[i]>b2[i])
        {
            a++;
        }
        else if(a2[i]<b2[i])
        {
            b++;
        }
    }
    printf("%d %d",a,b);
}