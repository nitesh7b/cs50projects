#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string text = get_string("Message: ");
    int len = strlen(text);
    int dec;
    for (int i = 0; i < len; i++){

        dec = text[i];
        int binary[] = {0,0,0,0,0,0,0,0};
        int j = 0;
        while(dec > 0){
           // printf("%i\n",dec);
            binary[j] = dec % 2;
            dec = dec/2;
            j++;
           // printf("%i",binary[j]);

        }
        for(int k = BITS_IN_BYTE - 1; k >= 0; k--)
        {
            print_bulb(binary[k]);
        }
        printf("\n");

    }


}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
