#include <stdio.h>
#include <math.h>
#define N 20
int main()
{
    int n, i, j, k, rem, remo, base, decimal = 0;
    int arr[N];
    printf("Enter the binary number you want to convert:\n");
 
    scanf("%d", &n);
 
    printf("Enter the base you want out of (10, 8, 16)\n");
    scanf("%d", &base);
    switch (base)
    {
    case 10:
    {
        int i = 0;
        while (n != 0)
        {
            rem = n % 10;
            decimal = decimal + rem * pow(2, i);
            n = n / 10;
 
            i++;
        }
        printf("The decimal form of the given binary is:   %d", decimal);
 
        break;
    }
    case 8:
    {
        int i = 0;
        int j = 0;
        int remo;
 
        printf("The octal form of the given binary is:\t");
        for (i = 0; n != 0; i++)
        {
            remo = n % 1000;
 
            for (j = 0; remo != 0; j++)
            {
                rem = remo % 10;
                decimal = decimal + rem * pow(2, j);
                remo = remo / 10;
            }
 
            arr[i] = decimal;
 
            decimal = 0;
 
            n = n / 1000;
        }
 
        for (k = i - 1; k >= 0; k--)
        {
            printf("%d", arr[k]);
        }
        break;
 
    default:
        printf("You have entered an invalid input");
 
        break;
    }
    case 16:
    {
        int i = 0;
        int j = 0;
        int remo;
        printf("The hexadecimal form of the given binary is:\t");
        for (i = 0; n != 0; i++)
        {
            remo = n % 10000;
 
            for (j = 0; remo != 0; j++)
            {
                rem = remo % 10;
                decimal = decimal + rem * pow(2, j);
                remo = remo / 10;
            }
            arr[i] = decimal;
 
            decimal = 0;
 
            n = n / 10000;
        }
        for (k = i - 1; k >= 0; k--)
        {
            if (arr[k] < 10)
            {
                printf("%d", arr[k]);
            }
            else
                printf("%c", arr[k] + 55);
        }
    }
    }
    return 0;
}