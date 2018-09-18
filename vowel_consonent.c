#include <stdio.h>
int main()
{
    char c;
    int isLower, isUpper,isconlo,isconup;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    isLower = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUpper = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    isconlo = (c == 'b'||c == 'c'||c == 'd'||c == 'f'||c == 'g'||c == 'h'||c == 'j'||c == 'k'||c == 'l'||c == 'm'||c == 'n'||c == 'p'||c == 'q'||c == 'r'||c == 's'||c == 't'||c == 'y'||c == 'v'||c == 'w'||c == 'x'||c == 'z' );
    isconlo = (c == 'B'||c == 'C'||c == 'D'||c == 'F'||c == 'G'||c == 'H'||c == 'J'||c == 'K'||c == 'L'||c == 'M'||c == 'N'||c == 'P'||c == 'Q'||c == 'R'||c == 'S'||c == 'T'||c == 'V'||c == 'W'||c == 'X'||c == 'Y'||c == 'Z' );
    
    if (isLower || isUpper)
    {
        printf("%c is a vowel.", c);
    }
    else if(isconlo||isconup)
    {
        printf("%c is a consonant.", c);
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}
