#include<stdio.h>
int main()
{
    char s[100];
    int i;
    float k,c1=0,c=0;
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='z')
        {
            c+=1;
        }
        if(s[i]=='o')
        {
            c1+=0.5;
        }
    }
    if(c==c1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}