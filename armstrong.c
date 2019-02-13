#include<stdio.h>
#include<conio.h>
void main()
{
 int i,val,t,a,b;
 scanf("%d",&val);
 t=val;
 for(i=0;t!=0;i++)
 {
     a=t%10;
     b=b+(a*a*a);
     t=t/10;
 }
 if(val==b)
 {
     printf("yes");
 }
 else
 {
     printf("no");
 }
}
