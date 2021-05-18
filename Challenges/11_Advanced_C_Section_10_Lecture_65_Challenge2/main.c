#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convertCase( FILE *fptr , const char* path );

int main()
{
    /* File pointer to hold reference of the input file  */
    FILE *fptr = NULL;
    char path[100];

    printf("Enter the path of the source file : ");
    scanf("%s", path);

    fptr = fopen(path, "r");

    /* fopen() return NULL if unable to open file in given mode*/
    if( fptr == NULL )
    {
        /* Unable to open the file hence exit */
        printf("Unable to open the file \n");
        printf("Please check whether file exists and you have read privilege ");
        exit(EXIT_FAILURE);
    }

    convertCase(fptr, path);


    return 0;
}

void convertCase( FILE *fptr , const char* path )
{
    FILE* dest = NULL;
    char ch = '\0';

    /* Temporary file to store the result */
    dest = fopen("temp.txt" , "w");

    /*If unable to create temporary file */
    if( dest == NULL )
    {
        printf("Unable to create temporary file \n");
        fclose(fptr);
        exit(EXIT_FAILURE);
    }

    /* Repeat till the end of file */
    while( ( ch = fgetc(fptr) ) != EOF )
    {
        /*
        If current character is upper case then toggle it to lower case and vice versa
        */
        if(isupper(ch))
        {
            ch = tolower(ch);
        }
        else if(islower(ch))
        {
            ch = toupper(ch);
        }

        /* Print toggled characters to destination file */
        fputc(ch,dest);
    }

    /* Close all files to release resource */
    fclose(fptr);
    fclose(dest);

    /* Delete original source file */
    remove(path);

    /* Rename temporary file as original file */
    rename("temp.txt",path);
}

