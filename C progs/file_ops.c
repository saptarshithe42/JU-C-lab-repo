#include <stdio.h>
#include <string.h>

int main()
{
    /* This is comment 1 */
    FILE *fp = fopen("file_ops.c", "r");
    FILE *dest = fopen("CODE_WITHOUT_COMMENTS.c", "w");

    char str[4000];

    int i = 0;
    char ch = fgetc(fp);
    while (!feof(fp))  /* Storing file contents into a string */
    {
        str[i] = ch;
        ch = fgetc(fp);
        i++;
    }

    str[i] = '\0';

    /* This is comment 2 */



    int j = 0;
    char current, next, new_current, new_next;

    while (str[j] != '\0') /* Traversing through the string */
    {
        current = str[j];
        next = str[j + 1];

        /* This is comment 3 */

        /* comment detection */ 
        if ((current == '/') && (next == '*'))
        {
            /* comment has started */
            
            j += 2;
            new_current = str[j];
            new_next = str[j + 1];

            /* To detect the end of comment */
            while ((new_current != '*') && (new_next != '/'))
            {
                j++;
                new_current = str[j];
                new_next = str[j + 1];
            }
            j += 2;
        }
      
        fprintf(dest,"%c", str[j]);
        j++;
    }

    /* This is comment 4 */

    fclose(fp);
    fclose(dest);

    return 0;
}