#include<stdio.h>
int main()
{
	int num,pd,rem,sum=0,temp;
	scanf("%d",&num);
	temp=num;
	for(;num>0;)
	{
		rem=num%10;//808%10=8
		sum=(sum*10)+rem;
		num=num/10;//234/10=432
	}
	if(temp==sum)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}