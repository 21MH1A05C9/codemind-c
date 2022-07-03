#include<stdio.h>
int main()
{
    int n,i,j,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==a[i]&&i!=j)
            {
                c++;
            }
        }
        if(c>=n/2)
        {
            printf("%d",a[i]);
            break;
        }
    }
}