#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i,j,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=INT_MAX;
            }
        }
        if(a[i]!=INT_MAX)
        {
            printf("%d ",a[i]);
        }
    }
}