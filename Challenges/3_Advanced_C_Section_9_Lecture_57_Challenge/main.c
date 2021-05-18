#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value = 18;
    int i = 1, j, k = 0;

    outerloop:
        if( i < value )
        {
            j = i;

        innerloop:
            if( j < value )
            {
                printf(" ");
                j++;
                goto innerloop;
            }
            else
            {
                inner_loop2:
                    if( k != ((2 * i)) )
                    {
                        if( k == 0 || k == ( 2 * i ) - 3 )
                        {
                            printf("*");
                        }
                        printf(" ");
                        k++;
                        goto inner_loop2;
                    }
                k = 0;
                printf("\n");
                i++;
                goto outerloop;
            }
        }
        else
        {
            i = 0;
            loop:
                if( i < ( 2 * value ) - 1 )
                {
                    printf("*");
                    i++;
                    goto loop;
                }

        }

    return 0;
}
