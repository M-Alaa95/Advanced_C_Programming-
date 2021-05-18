#include <stdio.h>
#include <stdlib.h>

union student
{
    char letterGrade;
    int roundedGrade;
    float exactGrade;
};

int main()
{
    union student record1;
    union student record2;

    /* Assigning values to record1 union variable */
    record1.letterGrade = 'B';
    record1.roundedGrade = 87;
    record1.exactGrade = 86.50;

    printf("Union record1 values example : \n\n");
    printf("Letter Grade : %c\n\n", record1.letterGrade);
    printf("Rounded Grade : %d\n\n", record1.roundedGrade);
    printf("Exact Grade : %f\n\n", record1.exactGrade);



    /* Assigning values to record2 union variable */



    printf("Union record2 values example : \n\n");
    record2.letterGrade = 'A';
    printf("Letter Grade : %c\n\n", record2.letterGrade);
    record2.roundedGrade = 100;
    printf("Rounded Grade : %d\n\n", record2.roundedGrade);
    record2.exactGrade = 99.50;
    printf("Exact Grade : %f\n\n", record2.exactGrade);
    return 0;
}
