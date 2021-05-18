#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum = 0;
    printf("Please enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Please set the values of the array:\n");
    printf("===================================\n");

    for( i=0 ; i<n ; i++ )
    {
        printf("Set the value of element number %d : ",i);
        scanf("%d", &arr[i]);
    }

    for( i=0 ; i<n ; i++ )
    {
        sum += arr[i];
    }
    printf("The summation of the numbers in the array are: %d", sum);

    return 0;
}
