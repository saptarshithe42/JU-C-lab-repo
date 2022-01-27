#include<stdio.h>

int sum_number(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += (num%10) * (num%10) * (num%10);
        num = num / 10;
    }
    return (sum);
}

int main()
{
    int limit;
    printf("Enter limit : ");
    scanf("%d", &limit);
    int i = 1;
    while (i <= limit)
    {
        if (i == sum_number(i))
            printf("%d ", i);
        i++;
    }
    return 0;
}