#include<stdio.h>
int main()
{
    int n,x[20],odd=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    
    
    for(i=0;i<n;i++)
    {
        if(x[i]%2!=0)
        odd++;
    }
    if(odd<=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
//if there is more than 2 vertices thers is no elur path 


