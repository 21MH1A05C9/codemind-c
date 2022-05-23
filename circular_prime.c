#include<stdio.h>
int p(int n)
{
    int i;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int r(int n)
{
    int s=0;
    while(n)
    {
        s=s*10+n%10;
        n=n/10;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(p(n))
    {
        if(p(r(n)))
        {
            printf("circular prime");
        }
        else
        {
            printf("prime but not a circular prime");
        }
    }
    else
    {
        printf("not prime");
    }
}