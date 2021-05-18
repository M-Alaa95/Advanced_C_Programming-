#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE* fp = NULL;
    char ch = '\0';

    int words = 1 , characters = 1;

    if( argc == 1 )
        {
            fp = stdin;
        }
    else if( argc == 2 )
    {
        if( ( fp = fopen( argv[1] , "r" ) ) == NULL )
        {
            fprintf( stderr, "Can't open %s\n", argv[1] );
            exit( EXIT_FAILURE );
        }
    }
    else
    {
        fprintf( stderr , "Usage: %s [flename]\n" , argv[0] );
        exit( EXIT_FAILURE );
    }
    ch = getc( fp );

    while( ch != EOF )
    {
        if( ch == ' ' || ch == '\n' )
        {
            words++;
        }
        else
        {
            characters++;
        }
         ch = getc( fp );
    }

    printf("\nThe number of words in the file are : %d\n", words - 1 );
    printf("\nThe number of characters in the file are : %d \n\n" , characters - 1);

    fclose(fp);

    return 0;
}
