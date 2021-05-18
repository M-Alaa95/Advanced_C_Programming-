#include <stdio.h>

#define SUM(X,Y)  ( X + Y)


int main()
{
    int num1 = 0;
    int num2 = 0;


    /* Input two numbers from the user */
    printf("Enter any two numbers: ");
    scanf("%d%d",&num1,&num2);

    /* Calculate and print the sum using the macro */
    printf("Sum(%d, %d) = %d", num1,num2, SUM(num1,num2));

    return 0;
}
