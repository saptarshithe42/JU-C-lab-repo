// Program to generate all prime numbers below 100. Count them.

#include<stdio.h>

int check_prime(int n);

int main()
{

    int arr[100]; // declaring the array
    int count=0;

    int index = 0;
    for (int i = 2; i < 100; i++)
    {
        // check if prime or not
        if (check_prime(i))
        {  
            arr[index] = i; // enter prime number in array
            index++; 
            count++;
        }
    }
    
    
    printf("There are %d prime numbers below 100.\n\n", count);

    //print the array of prime numbers
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
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