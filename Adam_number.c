#include<stdio.h>
int s(int n)
{
    int m=n*n;
    return m;
}
int f(int n)
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
    int n,g,k,l,u;
    scanf("%d",&n);
    g=s(n);
    k=f(n);
    l=s(k);
    u=f(l);
    if(g==u)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}