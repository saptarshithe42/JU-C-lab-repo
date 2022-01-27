#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of square numbers to be displayed : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        int oddno = 1;
        int j = 1;
        while (j <= i)
        {
            sum += oddno;
            printf("%d + ",i);
            oddno += 2;
            j++;
        }
        printf("= %d",sum);
        printf("\n");
    }
    return 0;
}