#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char response = 'y';
    do {
        char sentence[100];
        printf("Enter a sentence : ");
        scanf("%[^\n]s", sentence);
        fflush(stdin);
        
        int n = strlen(sentence);

        for(int i = 0; i < n; i++)
        {

            if (sentence[i] == ' ' || sentence[i] == '.' || sentence[i] == '?' || sentence[i] == '!')
                continue;

            else if (islower(sentence[i]))
            {
                sentence[i] = 'a' + ('z' - sentence[i]);
            }
            else
            {
                sentence[i] = 'A' + ('Z' - sentence[i]);
            }

        }

    printf("Encoded sentence : %s\n", sentence);

    
    printf("\nWant to enter a new sentence ? (y/n) : ");
    scanf("%c", &response);
    fflush(stdin);
    } while (response != 'n');

    return 0;
}