#include<stdio.h>
int main()
{
    int n,i,j,c=0,m=0,b;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int s=0;
        for(j=i;j<n;j++)
        {
            if(a[i]==a[j])
            {
                s++;
            }
            if(s==m&&a[i]<b)
            {
                b=a[i];
            }
            if(s>m)
            {
                m=s;
                b=a[i];
            }
        }
    }
    printf("%d",b);
}