// Given a lowercase alphabet character. You have to print the next character in the alphabet.
#include <stdio.h>
int main()
{
    int ch;
    scanf("%c", &ch);
    if(ch == 'z') 
    {
        printf("a");
    }
    else 
    {
        printf("%c", ch + 1);
    }
    return 0;
}