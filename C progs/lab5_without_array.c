// Program to generate prime numbers below 100

#include<stdio.h>

int check_prime(int n);

int main()
{
    int count = 0;
    printf("\n\n");
    for (int i = 2; i <= 100; i++)
    {
        // Print the number if it is prime
        if (check_prime(i))
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
    printf("\nNumber of prime numbers below 100 : %d\n", count);

    return 0;
}

// Function to check if a number is prime or not
int check_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i ==0)
            return 0;
    }
    return 1;
}