#include<stdio.h>


int main()
{
    /*This is  comment 1 */
    FILE *fptr = fopen("file.c", "r");

    char ch;

    ch = getc(fptr);
    /*This is  comment 2*/

    FILE *newfptr = fopen("newfile.txt", "w");

    while (ch != EOF)
    {
        fprintf(newfptr, "%c", ch);
        ch = getc(fptr);
    }

    fclose(fptr);

    
    return 0;
}