#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int addingNumbers(int nHowMany, ...);

int main(void)
{
    printf("\n\n Variadic functions: \n\n");

    printf("\n 10 + 20 = %d", addingNumbers(2,10,20) );
    printf("\n 10 + 20  + 30 = %d", addingNumbers(3,10,20,30) );
    printf("\n 10 + 20  + 30 + 40 = %d", addingNumbers(4,10,20,30,40) );
    printf("\n\n");


    return 0;
}


int addingNumbers(int nHowMany, ...)
{
    int sum = 0;
    int i;
    va_list intArgumentPointer;
    va_start(intArgumentPointer,nHowMany);

    for( i = 0 ; i < nHowMany ; i++ )
    {
        sum += va_arg(intArgumentPointer, int);
    }

    va_end(intArgumentPointer);

    return sum;
}
