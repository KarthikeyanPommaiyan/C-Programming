#include<stdio.h>
#include<conio.h>
void main()
{
int n,p,i,a,t=0;
scanf("%d",&n);
p=n;
for(i=0;p!=0;i++)
{
    a=p%10;
    t=t*10 + a;
    p=p/10;
}
if(n==t)
{
    printf("yes");
}
else
{
    printf("no");
}
}
