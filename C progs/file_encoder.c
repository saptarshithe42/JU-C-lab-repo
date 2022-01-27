#include<stdio.h>


int main()
{
    char fname1[40] = "file_encoder.c";
    char fname2[40] = "ENCODED_FILE.c";


    FILE* infile = fopen(fname1, "rb");
    FILE* outfile = fopen(fname2, "wb");

    unsigned char ch = fgetc(infile);
    unsigned char new_ch;

    int key;
    printf("\nEnter an integer key for enconding the file : ");
    scanf("%d", &key);

    while (!feof(infile))
    {
        new_ch = ~(ch ^ key);
        fwrite(&new_ch, sizeof(unsigned char), 1, outfile);
        ch = fgetc(infile);
    }



    
    return 0;
}