#include<stdio.h>
int main()
{
	int num,sum=0,sq,rem;
	scanf("%d",&num);
	sq=num*num;//81
	for(;sq;)
	{
		rem=sq%10;
		sum=sum+rem;
		sq=sq/10;
	}
	if(sum==num)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
}