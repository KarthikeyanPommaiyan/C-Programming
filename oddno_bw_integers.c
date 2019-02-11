#include<stdio.h>
void main()
{
    int a,b,c,i;
    scanf("%d %d",&a,&b);
    if(a&&b==100000)
    for(i=a+1;i<=b;i++)
    {
        if(i%2==1)
        {
            printf("%d ",i);
        }
    }
}
