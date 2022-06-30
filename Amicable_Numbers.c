#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sa=0,sb=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sa+=i;
        }
    }
    for(int i=1;i<b;i++)
    {
        if(b%i==0)
        {
            sb+=i;
        }
    }
    if(sa==b && sb==a)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}