//Program to display all  prime factors of all  composite  numbers below 20 in a tabular form

#include<stdio.h>

int main()
{
    int prime_array[100] = {0}; // Initializing an array for prime numbers
    prime_array[0] = 2;
    int count = 1;
    int composite_array[100] = {0};  // Initializing an array for composite numbers
    int composite_index = 0;

    for (int i = 3; i <= 20; i++)
    {
        int num_count = 0;
        for (int k = 0; k < count; k++)
        {
            if (i % prime_array[k] != 0)
            {
                num_count++;
            }
        }

        if (num_count == count)
        {
            prime_array[count] = i; // Inserting prime number in prime array
            count++;
        }
        else
        {
            composite_array[composite_index] = i; // Inserting composite number in composite array
            composite_index++;
        }
        
    }

printf("\n\nFactors of composite numbers below 100 :- \n\n");

int composite  = 0;
for (int i = 0; i < composite_index; i++)
{
    composite = composite_array[i];
    
    printf("%-2d = ", composite);

    for (int j = 0; j < count; j++)
    {
        int prime  = prime_array[j];
        while ((composite % prime == 0) && composite != 0)
        {
            printf("%d x ", prime);
            composite = composite / prime;
        }
    }

    printf("\n");
}
    return 0;
}

