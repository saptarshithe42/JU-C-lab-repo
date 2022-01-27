#include <stdio.h>
#include <string.h>

int main()
{
    
    FILE *fp = fopen("CODE_WITHOUT_COMMENTS.c", "r");
    FILE *dest = fopen("NO_comments.c", "w");

    char str[4000];

    int i = 0;
    char ch = fgetc(fp);
    while (!feof(fp))  
    {
        str[i] = ch;
        ch = fgetc(fp);
        i++;
    }

    str[i] = '\0';

    



    int j = 0;
    char current, next, new_current, new_next;

    while (str[j] != '\0') 
    {
        current = str[j];
        next = str[j + 1];

        

         
        if ((current == '/') && (next == '*'))
        {
            
            
            j += 2;
            new_current = str[j];
            new_next = str[j + 1];

            
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

    

    fclose(fp);
    fclose(dest);

    return 0;
}