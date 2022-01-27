
#include<stdio.h>
#include<string.h>


void bin_to_any(char *s, int base);

int main()
{
    char binary_array[20];

    printf("Enter the binary string : ");
    scanf("%[^\n]s", binary_array);
    fflush(stdin);

    int base;
    printf("Enter the base for conversion (8, 10, 16) : ");
    scanf("%d", &base);

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

    // printf("Decimal number : %d\n", binary_to_decimal(binary_array));
    bin_to_any(binary_array, base);


    return 0;
}

int binary_to_decimal(char *s)
{
    int number = 0;
    int length = strlen(s);
    int exponent = 1;

    for (int i = length - 1; i >= 0; i--)
    {
        int bit = s[i] - '0';

        number = number + (bit * exponent);
        exponent = exponent*2;
    }

    return (number);
}

void bin_to_any(char *s, int base)
{
    int decimal = binary_to_decimal(s);
    char converted[20];
    int index = 0;
    
    if (base == 10)
    {
        printf("Decimal equivalent : %d\n", decimal);
    }

    else if (base == 8)
    {

        while (decimal > 0)
        {
            converted[index] = (decimal % 8) + '0';
            decimal = decimal / 8;
            index++;
            
        }
        converted[index] = '\0';
        printf("octal equivalent : %s\n", strrev(converted));
    }

    else if (base == 16)
    {

        while (decimal > 0)
        {
            int digit = (decimal % 16);
            char final_digit;

            if (digit > 9)

            {
                switch (digit)
                {
                    case 10 : final_digit = 'A'; break;
                    case 11 : final_digit = 'B'; break;
                    case 12 : final_digit = 'C'; break;
                    case 13 : final_digit = 'D'; break;
                    case 14 : final_digit = 'E'; break;
                    case 15 : final_digit = 'F'; break;
                }
            }
            else
            {
                final_digit = digit + '0';
            }



            converted[index] = final_digit ;
            decimal = decimal / 16;
            index++;
            
        }
        converted[index] = '\0';
        printf("Hexadecimal equivalent : %s\n", strrev(converted));
    }
}