#include<stdio.h>
int main()
{
    char str[100];
    int i,j,length,temp;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++);
    length=i;
    i=0;
    j=length-1;
    while(i<j)
    {
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;
        i++;
        j--;
    }
    printf("%s",str);
}