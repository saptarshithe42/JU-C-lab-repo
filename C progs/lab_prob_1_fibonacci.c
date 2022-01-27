#include<stdio.h>

int main()
{
    int n;
    int a = 0;
    int b = 1;
    int c = a+b;
    printf("\nEnter number of terms of fibonacci series to print : ");
    scanf("%d", &n);
    
    if (n > 2)
    {
        printf("%d %d ", a,b);
        for (int i = 1; i<=n-2; i++)
        {
        printf("%d ",c);
        a = b;
        b = c;
        c = a + b;
        }
    }
    else
    {
        if (n == 1)
            printf("%d", a);
        else if (n == 2)
            printf("%d %d ", a, b);
    }
    printf("\n\n");
    
    return 0;
}