// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    bool up = false;
    bool lo = false;
    bool dig = false;
    bool pun = false;
    for (int i = 0; password[i] != '\0'; i++)
    {
        //printf("%c\n",password[i]);
       //// return true;
       if(isdigit(password[i]))
       {
        dig = true;


       }
       if(ispunct(password[i]))
       {
        pun = true;

       }
       if(islower(password[i]))
       {
        lo = true;
       }
       if(isupper(password[i]))
       {
        up = true;
       }


    }
    {
        if((dig == true) && (pun ==true) && (lo == true) && (up == true)){
            return true;
        }
    }

    return false;





}
