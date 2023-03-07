#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2){
        printf("Player 1 wins!\n");
    }
    else if(score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    int sum  = 0;
    for (int i = 0; word[i]; i++)
    {
        word[i] = tolower(word[i]);
    }
    for ( int i = 0; word[i] != '\0'; i++)
    {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'l'|| word[i] == 'n' || word[i] == 'o'|| word[i] == 'r' || word[i] == 's' || word[i] == 't' || word[i] == 'u')
        {
            sum = sum + 1;
        }
        if(word[i] == 'd' || word[i] == 'g')
        {
            sum = sum + 2;
        }
        if(word[i] == 'b' || word[i] == 'c' || word[i] == 'm' || word[i] == 'p')
        {
            sum = sum + 3;
        }
        if(word[i] == 'f' || word[i] == 'h' || word[i] == 'v' || word[i] == 'w' || word[i] == 'y')
        {
            sum = sum + 4;
        }
        if(word[i] == 'k')
        {
            sum +=5;
        }
        if(word[i] == 'j' || word[i] == 'x')
        {
            sum += 8;
        }
        if(word[i] == 'q' || word[i] == 'z')
        {
            sum += 10;
        }
        if(ispunct(word[i]))
        {
            sum += 0;
        }



    }
    //printf("%i\n",sum);
    return sum;


}
