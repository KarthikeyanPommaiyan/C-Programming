#include <stdio.h>
void main()
{
    char c;
    int isLower, isUpper;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    isLower = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUpper = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLower || isUpper)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
}
