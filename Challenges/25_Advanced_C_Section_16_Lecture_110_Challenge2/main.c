#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void allocateMemory( int **ptr )
{
    *ptr = (int *) malloc(sizeof(int));
}

int main()
{
    int *ptr = NULL;
    allocateMemory(&ptr);
    *ptr = 20;
    printf("%d\n", *ptr);
    free(ptr);


    return 0;
}
