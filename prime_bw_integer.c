#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,a,b,c;
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        c=0;
        for(n=2;n<i;n++)
        {
            if(i%n==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf(" %d",i);
        }
    }
    
}
