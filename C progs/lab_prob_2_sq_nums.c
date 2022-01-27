#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of square numbers to be displayed : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int oddno = 1;
       for(int j = 1; j <= i; j++)
       {
           printf("%d + ", oddno);
           oddno += 2;
       }
       printf("\b\b = %d", i*i);
       printf("\n");
    }
    return 0;
}