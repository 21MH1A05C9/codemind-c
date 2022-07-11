#include<stdio.h>
#include<math.h>
int ab(int n)
{
    int l=(pow(2,floor(log2(n))));
    int r=l*2;
    if(n-l>r-n)
    {
        return abs(r-n);
    }
    else
    {
        return abs(n-l);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",ab(n));
}