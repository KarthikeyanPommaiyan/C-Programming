#include<stdio.h>
#include<conio.h>
void main()
{
    int n,k,m=1,i;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        m=m*n;
    }
    printf("%d",m);
}
