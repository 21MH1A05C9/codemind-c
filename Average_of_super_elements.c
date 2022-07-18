#include<stdio.h>
int main()
{
    int n,i,j,a[100],s=0,c1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==a[i])
        {
            s+=a[i];
            c1++;
            a[i]=0;
        }
    }
    if(s==0)
    {
        printf("-1");
    }
    else
    {
        float k=(s*1.0)/(c1*1.0);
        printf("%.2f",k);
    }
}