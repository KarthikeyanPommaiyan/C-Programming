#include<stdio.h>
void main()
{
int a,n,c=0;
scanf("%d",&a);
for(n=2;n<a;n++)
{
if(a%n==0)
{
    c++;
}
}
if(a>=1000)
{
    c=1;
}
if(c==0)
{
    printf("Yes");
}
else
{
    printf("No");
}
}
