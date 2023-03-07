// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string value);
int main(int argc, string argv[])
{

    if (argc < 2){
        printf("Enter at least a value\n");
        return 1;
    }
     if (argc > 2){
        printf("Too many values\n");
        return 1;
    }
    string value = replace(argv[1]);
    printf("%s\n",value);


}

string replace(string value)
{
    for (int i = 0; value[i] != '\0';i++)
    {
        switch (value[i])
        {
            case 'a':
            value[i] = '6';
            break;


            case 'e':
            value[i] = '3';
            break;

            case 'i':
            value[i] = '1';
            break;

            case 'o':
            value[i] = '0';
            break;
        }
    }
    return value;


}
