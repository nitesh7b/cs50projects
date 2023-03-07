#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>


int count_letters(string text);
int count_sentence(string text);
int count_word(string text);

int main(void)
{
    string word = get_string("Text :");

    float letter = count_letters(word);
    //printf("number of letter is %f\n",letter);

    float sentence = count_sentence(word);
    //printf("number of sentence is %f\n",sentence);
    float avg = count_word(word);
    //printf("number of word is %f\n",avg);
    float L = (letter / avg * 100.00);
    //printf("L is %2f\n",L);
    float S = (sentence / avg * 100);
    //printf("S is %2f\n",S);
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int a = round(index);
    if (a < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (a >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n",a);
    }





}
int count_letters(string text)
{
    int sum  = 0;
    for (int i = 0; text[i]; i++)
    {
        if(isalpha(text[i])){
            sum += 1;

        }


    }
    //////////////////////printf("Your sum is  %i\n",sum);
    return sum;
}
int count_sentence(string text)
{
    int sum = 0;
    for (int i = 0;text[i]; i++)
    {
       if(text[i] == '.' || text[i] == '?' || text[i] == '!')
       {
        sum += 1;
       }
    }
   // printf("Total number of sentence is: %i\n",sum);
    return sum;
}
int count_word(string text)
{
    int sum = 0;
    for(int i = 0;text[i]; i++)
    {
        if(text[i] == ' ')
        {
            sum += 1;

        }


    }
    sum += 1;

    //printf("The total number of word is %i\n",sum);
    return sum;
}
