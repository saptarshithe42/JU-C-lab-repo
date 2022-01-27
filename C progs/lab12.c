#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *num_to_words(int n);
int count_digits(int n);

char* zero_to_nineteen[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
                                 "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

char* twenty_to_ninety[] = {"Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

int main()
{
    int num;
    printf("\nEnter an integer between 0 to 99 : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Invalid input! Only positive numbers allowed");
        return 0;
    }
    char* word = num_to_words(num);
    printf("%s", word);  
    return 0;
}

char *num_to_words(int n)
{
    int num_digits = count_digits(n);

    if ((num_digits == 1) || ((num_digits == 2) && n < 20))
    {
        return (zero_to_nineteen[n]);
    }

    else
    {
        int last_digit = n % 10;
        n = n / 10;
        int first_digit = n %10;
        char*  words = malloc (2*sizeof(char*));
        if (last_digit != 0)
            sprintf(words, "%s %s", twenty_to_ninety[first_digit-2],zero_to_nineteen[last_digit]);
        else
            sprintf(words, "%s", twenty_to_ninety[first_digit-2]);    

        return (words);
    }
}

int count_digits(int n)
{
    int count = 0;
    if (n == 0)
        return (1);

    while (n != 0)
    {
        n = n / 10;
        count ++;
    }

    return (count);
}