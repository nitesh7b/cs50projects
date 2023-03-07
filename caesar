#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    string key = argv[1];
    int len = strlen(key);
    for (int j = 0; j < len; j++)
    {
        if(!isdigit(key[j]))
        {
            printf("Usage: ./caesar key\n");
            return 1;

        }
    }
    string plain_text = get_string("plaintext: ");
    printf("ciphertext: ");
    int length = strlen(plain_text);
    int k = atoi(key);
    for(int l = 0; l < length; l++)
    {
        if(isupper(plain_text[l])){
            printf("%c",(plain_text[l] + k - 65) % 26 + 65);

        }
        else if (islower(plain_text[l])){
            printf("%c",(plain_text[l] + k - 97) % 26 + 97);

        }
        else
        {
            printf("%c",plain_text[l]);
        }

    }
    printf("\n");



}
