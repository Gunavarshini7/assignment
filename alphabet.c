#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') 
        ? printf("It is alphabet")
        : printf("It is not alphabet");

    return 0;
}
