#include <stdio.h>

int main()
{
    int num;
    char character;
    printf("Enter any character or Number: ");
    scanf("%c"
          "%d",
          &character & num);
    if (character == 'A' || 'E' || 'I' || 'O' || 'U' || 'a' || 'e' || 'i' || 'o' || 'u')

        printf("'%c' is vowel.", character);
    {
        else if (character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')
                                                              printf("'%c' is other character.", character);
    }
    else printf("'%d' is number.", num);
}