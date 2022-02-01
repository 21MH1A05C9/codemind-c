#include<stdio.h>
int main()
{
	int num,f=0,i;
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			f=f+i;
		}
	}
	if(f>num)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}