#include<stdio.h>
int main()
{
    long long int a;
    scanf("%lld",&a);
    if (a>999999999 && a<10000000000)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    
}