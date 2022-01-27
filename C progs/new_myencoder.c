#include<stdio.h>
#include<string.h>


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
            // sentence[i] = 'ÿ'- (sentence[i] - '\0');
            sentence[i] = 255 - (sentence[i] - 0);
    
        }

    printf("Encoded sentence : %s\n", sentence);

    
    printf("\nWant to enter a new sentence ? (y/n) : ");
    scanf("%c", &response);
    fflush(stdin);
    } while (response != 'n');

    return 0;
}

