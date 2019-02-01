#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,k;
    scanf("%d",&n);
    i=0;
    do{
        i++;
        k=i+k;
    }while(i<n);
    printf("%d",k);
}
