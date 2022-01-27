#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *num_to_words(int n);
int count_digits(int n);
int words_to_num(char *s);

char* zero_to_nineteen[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
                                 "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

char* twenty_to_ninety[] = {"", "", "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

char* hundred = "Hundred";
char* thousand = "Thousand";

int main()
{
    char str[100];
    printf("\n\nEnter a number in Words (between 0 to 99999) : ");
    scanf("%[^\n]s", str);
    int num = words_to_num(str);
    printf("%d", num);  
    return 0;
}



int words_to_num(char *s)
{
    int num = 0;
    const char* separator = " ";
   char* token = strtok(s, separator);
   while (token != NULL)
   {
       // checking in zero_to_nineteen array
       for (int i = 0; i < 20; i++)
       {
           if (strcmp(token, zero_to_nineteen[i]) == 0)
           {
               num += i;
           }
       }

       // checking in twenty_to_ninety array
       for (int i = 2; i < 10; i++)
       {
           if (strcmp(token, twenty_to_ninety[i]) == 0)
           {
               num += i * 10;
           }
       }

       if (strcmp(token, hundred) == 0)
       {
           num = (num - (num % 10)) +  (num % 10) * 100;
       }
       
       if (strcmp(token, thousand) == 0)
       {
           num *= 1000;
       }

       token = strtok(NULL, separator);
   }
    
    return (num);
}

