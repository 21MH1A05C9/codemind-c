#include<stdio.h>
int p(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            if(p(i))
            {
                c++;
                printf("%d ",i);
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}