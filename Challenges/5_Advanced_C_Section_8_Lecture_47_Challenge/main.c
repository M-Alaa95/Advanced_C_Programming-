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
    int Num1 = 0,Num2 = 0;
    long long B_Num1 = 0, B_Num2 = 0;

    int d_num1LeftShiftResult = 0;

    long long B_Num1ComplimentResult = 0;
    long long B_Num2ComplimentResult = 0;
    long long B_Num1_AND_Num2_Result = 0;
    long long B_Num1_OR_Num2_Result = 0;
    long long B_Num1_XOR_Num2_Result = 0;
    long long B_num1LeftShiftResult = 0;

    //Input Num1:
    printf("Enter Num1: ");
    scanf("%d",&Num1);

    //Input Num2:
    printf("Enter Num2: ");
    scanf("%d",&Num2);




    B_Num1 = Convert_dec_to_bin(Num1);
    B_Num2 = Convert_dec_to_bin(Num2);

    printf("B_Num1: %lld\n",B_Num1);
    printf("B_Num2: %lld\n",B_Num2);

    B_Num1ComplimentResult = Convert_dec_to_bin(~B_Num1);

    B_Num2ComplimentResult = Convert_bin_to_dec(~B_Num2);

    B_Num1_AND_Num2_Result = Convert_bin_to_dec(B_Num1 & B_Num2);

    B_Num1_OR_Num2_Result = Convert_bin_to_dec(B_Num1 | B_Num2);

    B_Num1_XOR_Num2_Result = Convert_bin_to_dec(B_Num1 ^ B_Num2);

    B_num1LeftShiftResult = Convert_bin_to_dec(B_Num1<<1);

    printf("Num1 Compliment: %lld\n",B_Num1ComplimentResult);
    printf("Num2 Compliment: %lld\n",B_Num2ComplimentResult);
    printf("Num1 AND Num2: %lld\n",B_Num1_AND_Num2_Result);
    printf("Num1 OR Num2: %lld\n",B_Num1_OR_Num2_Result);
    printf("Num1 XOR Num2: %lld\n",B_Num1_XOR_Num2_Result);
    printf("Num1 Shift Left: %lld\n\n\n",B_num1LeftShiftResult);


    printf("Num1 Compliment: %lld\n",Convert_dec_to_bin(B_Num1ComplimentResult));
    printf("Num2 Compliment: %lld\n",Convert_dec_to_bin(B_Num2ComplimentResult));
    printf("Num1 AND Num2: %lld\n",Convert_dec_to_bin(B_Num1_AND_Num2_Result));
    printf("Num1 OR Num2: %lld\n",Convert_dec_to_bin(B_Num1_OR_Num2_Result));
    printf("Num1 XOR Num2: %lld\n",Convert_dec_to_bin(B_Num1_XOR_Num2_Result));
    printf("Num1 Shift Left: %lld\n",Convert_dec_to_bin(B_num1LeftShiftResult));

    return 0;
}
