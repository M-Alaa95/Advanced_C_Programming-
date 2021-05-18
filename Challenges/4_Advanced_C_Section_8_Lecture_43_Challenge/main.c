#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Convert_bin_to_dec( long long n )
{
    int DecimalNumber = 0, i = 0 , remainder = 0 ;

    while( n != 0 )
    {
        remainder = n % 10 ;
        n = n / 10 ;
        DecimalNumber += remainder*pow(2,i);
        ++i;
    }

    return DecimalNumber;
}

long long Convert_dec_to_bin( int n )
{
    int BinNumber = 0, i = 1 , remainder = 0 ;

    while( n != 0 )
    {
        remainder = n % 2 ;
        n = n / 2 ;
        BinNumber += remainder * i ;
        i = i * 10 ;
    }

    return BinNumber;
}


int main()
{
    long long input_Binary;
    int output_Decimal;


    int input_Decimal;
    long long output_Binary;

    //Convert from Binary to Decimal
    printf("Please Enter the binary number you wish to convert into decimal: ");
    scanf("%lld",&input_Binary);

    output_Decimal = Convert_bin_to_dec(input_Binary);
    printf("The value of the number in decimal is: %d\n", output_Decimal);

    //Convert from Decimal to Binary
    printf("Please Enter the decimal number you wish to convert into binary: ");
    scanf("%lld",&input_Decimal);

    output_Binary = Convert_dec_to_bin(input_Decimal);
    printf("The value of the number in decimal is: %d\n", output_Binary);

    return 0;
}
