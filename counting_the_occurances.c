#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000],s2;
    int i,c=0;
    scanf("%[^
]s",s);
    scanf("
%c",&s2);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==s2)
        {
            c++;
        }
    }
    if(c!=0)
    {
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
}