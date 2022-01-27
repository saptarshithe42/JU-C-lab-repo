#include<stdio.h>

int check_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void print_factors(int n)
{
    printf("Factors of %d are : ", n);
            for (int k = 1; k <= n; k++)
            {
                if (n % k == 0)
                {
                    printf("%d ", k);
                }
            }
}

int main()
{
    for (int i = 2; i < 20; i++)
    {
        int prime = check_prime(i);

        if (prime == 0)
        {
           print_factors(i);
        }
            printf("\n");
        }
    }

    return 0;
}