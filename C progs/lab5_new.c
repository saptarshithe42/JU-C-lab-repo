
// Program to generate all prime numbers below 100 and count them.

#include<stdio.h>

int main()
{
    int prime_array[100] = {0}; // Initialzing prime number array 
    prime_array[0] = 2;
    int count = 1;

    for (int i = 3; i <= 100; i++)
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
            prime_array[count] = i; // Inserting prime number in array
            count++;
        }
        
    }

    printf("\n\nThere are %d prime numbers below 100.\n\n", count);
    // Printing prime numbers stored in array
    for (int i = 0; i < count; i++)
    {
        printf("%d ", prime_array[i]);
   
    }

    printf("\n\n");

    return 0;
}