#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==a)
    {
        printf("Equilateral");
    }
    if(a!=b && b!=c)
    {
        printf("Isosceles");
    }
}