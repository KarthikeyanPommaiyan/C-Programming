#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,k,p;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        printf(" %d",i);
    }
    i=0;
    do{
        i++;
        p=i+p;
    }while(i<k);
    printf("\n%d",p);
}
