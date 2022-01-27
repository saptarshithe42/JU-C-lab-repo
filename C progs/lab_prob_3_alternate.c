#include<stdio.h>


int main()
{
    int limit;
    printf("\nEnter limit : ");
    scanf("%d", &limit);
    int i = 1;
    while (i <= limit)
    {
        int num = i;
        int sum = 0;
        while (num > 0)
        {
            sum += (num%10) * (num%10) * (num%10);
            num = num / 10;
        }
        if (i == sum)
            printf("%d ", i);
        i++;
    }
    printf("\n\n");
    return 0;
}