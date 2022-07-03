#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,t,s=0;
    scanf("%d",&n);
    t=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i]*pow(2,t);
        t--;
    }
    printf("%d",s);
    
}