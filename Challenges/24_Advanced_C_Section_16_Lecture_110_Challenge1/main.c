#include <stdio.h>
#include <stdlib.h>



int main()
{
    int num = 123;
    int *singlePointer = NULL;
    int **doublePointer = NULL;

    singlePointer = &num;
    doublePointer = &singlePointer;

    /* Possible ways to find the value of variable num */
    printf("\n Value of num is: %d", num);
    printf("\n Value of num using singePointer is: %d", *singlePointer);
    printf("\n Value of num using doublePointer is: %d", **doublePointer);


    /* Possible ways to find the address of num */
    printf("\n Address of num is: %p", &num);
    printf("\n Address of num using singePointer is: %p", singlePointer);
    printf("\n Address of num using doublePointer is: %p", *doublePointer);


    /* Possible ways to find the value of singePointer*/
    printf("\n Value of singlePointer is: %p ", singlePointer);
    printf("\n Value of singlePointer using doublePointer is: %p ", *doublePointer);

    /* Possible ways to find the address of singePointer*/
    printf("\n Address of singlePointer is: %p ", &singlePointer);
    printf("\n Address  of singlePointer using doublePointer is: %p ", doublePointer);

    /* Possible ways to find the value and address of doublePointer*/
    printf("\n value of doublePointer is: %p ", doublePointer);
    printf("\n Address  of doublePointer is: %p ", &doublePointer);


    return 0;
}
