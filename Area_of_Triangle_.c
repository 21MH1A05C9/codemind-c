#include<stdio.h>
#include<math.h>
int main ()
{
    double s,a,b,c,area;
    scanf("%lf%lf%lf",&a,&b,&c);
    s=(a+b+c)/2;
    area=(sqrt(s*(s-a)*(s-b)*(s-c)));
    printf("%.2f",area);
}