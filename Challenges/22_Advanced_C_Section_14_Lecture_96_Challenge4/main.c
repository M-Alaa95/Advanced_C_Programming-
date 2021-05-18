#include <stdio.h>

#define IS_UPPER(X) ( X >= 'A' &&  X <= 'Z' )
#define IS_LOWER(X) ( X >= 'a' &&  X <= 'z' )

int main()
{
    char ch = '\0';

    /* Input a character from user */
    printf("Enter any character: ");
    ch  = getchar();

    if(IS_UPPER(ch))
    {
        printf("'%c' is uppercase \n", ch);
    }
    else if(IS_LOWER(ch))
    {
        printf("'%c' is lowercase \n", ch);
    }
    else
    {
        printf("Entered character is not an alphabet\n\n");
    }



    return 0;
}
