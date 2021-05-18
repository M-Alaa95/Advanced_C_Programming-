#include <stdio.h>
#include <stdlib.h>


struct s
{
    int arraySize;
    int array[];
}koko;

int main()
{
    int desiredSize, i;
    printf("Please enter the desired size of the array:");
    scanf("%d", &desiredSize);

    /*Assigning the value for the array elements*/
    for( i=0 ; i< desiredSize ; i++)
    {
        koko.array[i] = i + 10 ;
    }

    printf("Elements of the array are:\n");
    printf("==========================\n");
    for( i=0 ; i<desiredSize ; i++ )
    {
        printf("Element number %d is %d\n",i, koko.array[i]);
    }

    return 0;
}
