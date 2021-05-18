#include <stdio.h>
#include <stdlib.h>

/* Function declarations  */
int isEven(const int);
int isPrime(const int);

int main()
{
    FILE* fPtrIn = NULL;
    int num = 0, success = 0;

    fPtrIn = fopen("numbers.txt" , "r");

    /* fopen() return NULL if unable to open the file in given mode */
    if(fPtrIn == NULL)
    {
        /* Unable to open the file hence exit */
        printf("Unable to open the file\n");
        printf("Please check whether file exists and you have read/write privilege\n");
        exit(EXIT_FAILURE);
    }

    /* File open success message */
    printf("File opened successfully , reading integers from the file \n\n");

    /* Read an integer and store read status in success (initial read) */
    success = fscanf( fPtrIn , "%d" , &num );

    do
    {
        /*
        Write prime , even , and odd numbers to standard output
        */
        if(isPrime(num))
        {
            printf("Prime number found: %d\n", num);
        }
        else if(isEven(num))
        {
            printf("Even number found: %d\n", num);
        }
        else
        {
            printf("Odd number found: %d\n", num);
        }
        /* Read an integer and store read status in success (initial read) */
        success = fscanf( fPtrIn , "%d" , &num );
    } while(success != -1);

    fclose(fPtrIn);

    return 0;
}

int isEven(const int num)
{
    return !(num & 1);
}


int isPrime(const int num)
{
    int i = 0;

    if( num < 0 )
    {
        return 0;
    }
    for( i = 2 ; i <= num / 2 ; i++ )
    {
        /*
        If the number is divisible by any number other than 1 and self then it is not prime
        */

        if( num % i == 0 )
        {
            return 0;
        }
    }
    return 1;
}
