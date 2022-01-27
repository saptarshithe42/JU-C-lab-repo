#include<stdio.h>
#include<string.h>

int main()
{
    char response = 'y';
    do {
    char sentence[100];

    printf("Enter an encoded sentence : ");
    scanf("%[^\n]s", sentence);
    fflush(stdin);

    int length = strlen(sentence);

    int index;
    for (index = 0; index < length; index++)
    {
        // if (sentence[index] == ' ' || sentence[index] == '.' || sentence[index] == ',')
        //     continue;

        if (index % 2 == 0)
        {   
            if (sentence[index] == 'a')
                sentence[index] = 'z';

            else if (sentence[index] == 'A')
                sentence[index] = 'Z';

            else
                sentence[index] = sentence[index] - 1;
        }
        else
        {
            if (sentence[index] == 'z')
                sentence[index] = 'a';

            else if (sentence[index] == 'z')
                sentence[index] = 'A';

            else
                sentence[index] = sentence[index] + 1;
        }
    }

    printf("Decoded string : %s\n", sentence);

    printf("\nWant to enter a new sentence ? (y/n) : ");
    scanf("%c", &response);
    fflush(stdin);
    } while (response != 'n');

    return 0;
}