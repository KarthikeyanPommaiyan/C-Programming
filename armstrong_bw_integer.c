#include<stdio.h>
void main()
{
   int j,i,m,n,t,a,b=0;
   scanf("%d %d",&m,&n);
   for(i=m;i<n;i++)
   {
       t=i;
       for(j=0;t!=0;j++)
       {
           a=t%10;
           b=b+(a*a*a);
           t=t/10;
       }
       if(i==b)
           printf(" %d",b);
           b=0;
    }
}
