#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int count_spaces(char s[]);
char* name_initials(char s[]);


int main()
{
    char name[100];

    printf("\nEnter full name : ");
    scanf("%[^\n]s", name);
    char *new = name_initials(name);
    printf("\n%s", new);

    return 0;
}

int count_spaces(char s[])
{
    int count = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
            count++;
        i++;
    }
    return count;

}

char* name_initials(char s[])
{
   int len = strlen(s);
   int index;
   char *new_name = (char*)malloc(100);
   int pos = sprintf(new_name,"%c ", s[0]);
   // to calculate starting of surname
   for (int i = len-1; i >= 0; i--)
   {
       if (s[i] == ' ')
       {
           index = i;
           break;
       }
   }
    int j = 0;
    
    while (j < index)
    {
        if (s[j] == ' ')
            pos += sprintf(new_name+pos,"%c ", s[j+1]);
        j++;
    }

    char *ptr = s;
    ptr += index + 1;
    sprintf(new_name+pos,"%s", ptr);
    new_name = realloc(new_name, strlen(new_name)); // to get string of exact length
    return (new_name);
}
