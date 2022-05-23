#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int n,m,i,t;
    scanf("%[^
]s",s);
    n=strlen(s);
    m=n-1;
    for(i=0;i<m;i++)
    {
        t=s[i];
        s[i]=s[m];
        s[m]=t;
        m--;
    }
    printf("%s",s);
}