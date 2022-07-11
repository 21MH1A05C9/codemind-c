#include<stdio.h>
int main()
{
    int n,m,s=0;
    scanf("%d",&n);
    while(n/10!=0)
    {
        s=0;
        while(n)
        {
            m=n%10;
            s=s+m;
            n=n/10;
        }
        n=s;
    }
    printf("%d",s);
}