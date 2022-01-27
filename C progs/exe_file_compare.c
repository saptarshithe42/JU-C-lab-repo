#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename1[400] = "C:\\Users\\sapta\\OneDrive\\Desktop\\JU C Prog Practical\\file_ops.exe";
    char filename2[400] = "C:\\Users\\sapta\\OneDrive\\Desktop\\file op\\file_ops.exe";

    FILE *file1 = fopen(filename1, "r");
    FILE *file2 = fopen(filename2, "r");

    char ch1 = fgetc(file1);
    char ch2 = fgetc(file2);

    while ((!feof(file1)) && (!feof(file2)))
    {
        if (ch1 != ch2)
        {
            printf("Files not equal.\n");
            return 0;
        }
        char ch1 = fgetc(file1);
        char ch2 = fgetc(file2);
    }

    fclose(file1);
    fclose(file2);

    printf("\nThe executable files are same.\n");

    return 0;
}