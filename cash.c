#include <cs50.h>
#include <stdio.h>

int x,a,b,c,d;
int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    do{
        x = get_int("Number of cents: ");

    }
    while (x < 1);
    //printf("%i\n",x);
    return x;
}

int calculate_quarters(int cents)
{
    // TODO
    a = (cents / 25);

    return a;
}

int calculate_dimes(int cents)
{
    // TODO
    b = (cents / 10);
    return b;
}

int calculate_nickels(int cents)
{
    // TODO
    c = (cents / 5);

    return c;
}

int calculate_pennies(int cents)
{
    // TODO
    d = (cents / 1);
    return d;
}
