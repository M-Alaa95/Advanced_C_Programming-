#include <stdio.h>
#include <stdlib.h>


int set_bit(int,int);
int clear_bit(int,int);
int check_bit(int,int);

int main()
{
    int input_number, n, bit_n_set, bit_n_cleared;
    printf("Enter any number: ");
    scanf("%d",&input_number);

    printf("Enter nth number to check and set(0-31): ");
    scanf("%d",&n);

    if(check_bit(input_number,n) != 0 )
    {
        printf("Bit is set\n");
    }
    else
    {
        printf("Bit is cleared\n");
    }

    bit_n_set = set_bit(input_number,n);
    bit_n_cleared = clear_bit(input_number,n);

    printf("Number with bit %d set is: %d \n",n, bit_n_set);
    printf("Number with bit %d cleared is: %d \n",n, bit_n_cleared);

    return 0;
}


int set_bit(int input_number,int n)
{
    input_number |= (1<<n);
    return input_number;
}

int clear_bit(int input_number,int n)
{
    input_number &= ~(1<<n);
    return input_number;
}

int check_bit(int input_number, int n)
{
    int result;
    result = input_number & (1<<n);
    return result;
}
