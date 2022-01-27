#include<stdio.h>
#include<string.h>

void encoder(char *s);

int main()
{
    int n;
    printf("\n\nEnter the number of sentences : ");
    scanf("%d", &n);
    fflush(stdin);

    char sentence_array[n][100]; // 2D array to contain strings

    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth sentence : ", i+1);
        scanf("%[^\n]s", &sentence_array[i]);
        fflush(stdin);
    }

    // for (int i = 0; i < n; i++)
    //     printf("%s\n", sentence_array[i]);

    printf("\nEncoded sentences are : ");

    // prints encoded sentences 

    for (int i = 0; i < n; i++)
    {
        printf("\n%dth sentence : ", i+1);
        encoder(sentence_array[i]);
        printf("\n");
    }

    printf("\n");

    return 0;
}

void encoder(char *s)
{
    char *sentence = s;
    int length = strlen(sentence);

    int index;
    for (index = 0; index < length; index++)
    {

        if (index % 2 == 0)
        {   
            if (sentence[index] == 'z')
                sentence[index] = 'a';

            else if (sentence[index] == 'Z')
                sentence[index] = 'A';

            else
                sentence[index] = sentence[index] + 1;
        }
        else
        {
            if (sentence[index] == 'a')
                sentence[index] = 'z';

            else if (sentence[index] == 'A')
                sentence[index] = 'Z';

            else
                sentence[index] = sentence[index] - 1;
        }
    }

    printf("%s", sentence);

}