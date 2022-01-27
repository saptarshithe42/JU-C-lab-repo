/* Program to display the factors of all composite  numbers below 20 in a tabular form. */


#include<stdio.h>

int check_prime(int n);
void print_factors(int num);

int main()
{
    printf("\nFactors of composite numbers below 20 :- \n");
    // Iterating through numbers upto 20
    for (int i = 2; i <= 20; i++)
    {
        // Check if composite or not   
        if (check_prime(i) == 0)
        {
            printf("Factors of %2d are : ", i);
            print_factors(i);
            printf("\n");
        }
    }

    return 0;
}


// Function to check if a number is prime 
// Returns 1 for prime 0 for composite

int check_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i ==0)
            return 0;
    }
    return 1;
}

// Function to print factors of a number 
void print_factors(int num)
{
    for (int k = 1; k <= num; k++)
    {
        if (num % k == 0)
        {
            printf("%d ", k);
        }
    }
}