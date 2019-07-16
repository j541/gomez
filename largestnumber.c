#include<stdio.h>
void main()
int a,b,c;
{
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("a is the largest number");
if(b>c && b>a)
printf("b is the largest number");
if(c>a && c>b)
printf("c is the largest number");
}
