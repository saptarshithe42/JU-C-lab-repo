#include<stdio.h>

void number_converter(int num, int base);

int main()
{
    int decimal;
    printf("\n\nEnter a decimal number : ");
    scanf("%d", &decimal);

    if (decimal == 0)
    {
        printf("Equivalent = 0 in all bases");
        return 0;
    }

    int choice;
    printf("Available bases for conversion : \n");
    printf("Base 2\n");
    printf("Base 8\n");
    printf("Base 16\n");
    printf("Choose base for conversion : ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 2 : printf("Binary equivalent : ");
                 number_converter(decimal, 2);     
                 break;

        case 8 : printf("Octal equivalent : ");
                 number_converter(decimal, 8);    
                 break; 

        case 16 : printf("Hexadecimal equivalent : ");
                  number_converter(decimal, 16);    
                  break;

        default : printf("Invalid choice !");
    }
    return 0;
}

void number_converter(int num, int base)
{
    if (num == 0)
    {
        return;
    }
    number_converter(num/base, base); // recursive call

    int rem = (num % base);
    // only for the case of decimal to hex conversion
    if (base == 16)
    {
        switch (rem)
        {
            case 10 : printf("%c",'A'); return;
            case 11 : printf("%c",'B'); return;
            case 12 : printf("%c",'C'); return;
            case 13 : printf("%c",'D'); return;
            case 14 : printf("%c",'E'); return;
            case 15 : printf("%c",'F'); return;
        }
    }
    printf("%d", rem);

}