#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    unsigned int a  = ~('a' << 5);
    unsigned int b = ~(a >> 5);

    printf("%c", b);


    return 0;
}