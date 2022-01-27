#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

void bin_to_any_2(char *s, int base);

int main()
{
    char choice = 'y';
    do {
        
        char binary_array[50];

        printf("\nEnter the binary string : ");
        scanf("%[^\n]s", binary_array);
        fflush(stdin);
        int k = 0;
        while (binary_array[k] != '\0')
        {
            if (binary_array[k] != '1' && binary_array[k] != '0')
            {
                printf("Invalid binary string !");
                return 0;
            }
            k++;
        }

        printf("\nAvailable bases for conversion : \n");
        printf("Base 8\n");
        printf("Base 10\n");
        printf("Base 16\n");
        printf("Choose base for conversion : ");

        int base;
        scanf("%d", &base);
        fflush(stdin);

        switch(base)
        {
            case 8: break;
            case 10: break;
            case 16: break;
            default : printf("Invalid base!"); return 0;
        }

        
        bin_to_any_2(binary_array, base);
        printf("\n\nWant to enter again ? (y/n) : ");
        choice = getche();
    } while(choice != 'n');


    return 0;
}


void bin_to_any_2(char *s, int base)
{
    int sum = 0;
    // decimal conversion
    if (base == 10)
    {
        int j = 0;
        for (int i = strlen(s) - 1; i >= 0; i--)
        {
            int bit  = s[i] - '0';
            sum += bit*pow(2,j);
            j++;
        }
        printf("Decimal equivalent = %d", sum);
    }
    //octal conversion
    else if (base == 8)
    {
       int num = 0;
       char new[100] = {'\0'};
       char oct[20];
        int rem = strlen(s) % 3;
        // To make the string able to be grouped in 3 terms
        if (rem == 1)
        {
            new[0] = '0';
            new[1] = '0';
            strcat(new,s);
        }
        else if (rem == 2)
        {
            new[0] = '0';
            strcat(new,s);
        }
        else
        {
            strcpy(new,s);
        }

       int index = strlen(new) - 1;
       int k = 0;
       while (index >= 0)
       {
           int digit = 0;
           for(int i = 0; i < 3; i++)
           {
               int bit = new[index - i] - '0';
               digit = digit + bit*pow(2,i);
           }

            oct[k] = digit + '0';
            k++;
           index -= 3;
       }
       oct[k] = '\0';
       printf("Octal Equivalent = %s", strrev(oct));

    }

    // hexadecimal conversion
    else if (base == 16)
    {
       int num = 0;
       char new[100] = {'\0'};
        int rem = strlen(s) % 4;
        char hex[20];
        // To make the string able to be grouped in 4 terms
        if (rem == 1)
        {
            new[0] = '0';
            new[1] = '0';
            new[2] = '0';
            strcat(new,s);
        }
        else if (rem == 2)
        {
            new[0] = '0';
            new[0] = '0';
            strcat(new,s);
        }
        else if (rem == 3)
        {
            new[0] = '0';
            strcat(new,s);
        }
        else
        {
            strcpy(new,s);
        }

       int index = strlen(new) - 1;
       int k = 0;
       while (index >= 0)
       {
           int digit = 0;
           for(int i = 0; i < 4; i++)
           {
               int bit = new[index - i] - '0';
               digit = digit + bit*pow(2,i);
           }
           if (digit < 10)
                hex[k] = digit + '0';
            else
                hex[k] = digit + 55;
           k++;
           index -= 4;
           
       }
       hex[k] = '\0';
    printf("Hexadecimal equivalent = %s\n", strrev(hex));

    }
}