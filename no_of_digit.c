#include<stdio.h>
#include<conio.h>
int main()
{
    long long n;
    int c = 0;
    scanf("%lld", &n);
    while(n != 0)
    {
         n = n/10;
         ++c;
    }
    printf(" %d", c);
}
