#include <stdio.h>

#define SQUARE(X) ( X * X )
#define CUBE(X) ( X * X * X )
int main()
{
    int num = 0;

    /* Input a number from user */
    printf("Enter a number to find square and cube: ");
    scanf("%d", &num);

    /* Calculate and print square */
    printf("SQUARE(%d) = %d\n", num, SQUARE(num));

    /*Calculate and print cube */
    printf("CUBE(%d) = %d\n", num , CUBE(num));


    return 0;
}
