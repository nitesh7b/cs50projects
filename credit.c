#include <cs50.h>
#include <stdio.h>




int main(void)
{
    long card;
    do
    {
        card = get_long("Number :");
    }
    while (card < 0);
    int length = 0;
    int one = (card % 10);
    int two = (((card % 100)/10)*2);
    int three = (card % 1000)/100;
    int four = (((card % 10000)/1000)*2);
    int five = (card % 100000)/10000;
    int six = (((card % 1000000)/100000)*2);
    int seven = ( card % 10000000)/1000000;
    int eight = (((card % 100000000)/10000000)*2);
    int nine = (card % 1000000000)/100000000;
    int ten = (((card % 10000000000)/1000000000)*2);
    int eleven = (card % 100000000000)/10000000000;
    int twelve = (((card % 1000000000000)/100000000000)*2);
    int thirteen = (card % 10000000000000)/1000000000000;
    int fourteen = (((card % 100000000000000)/10000000000000)*2);
    int fifteen = (card % 1000000000000000)/100000000000000;
    int sixteen = (((card % 10000000000000000)/1000000000000000)*2);





    sixteen = (sixteen % 100/10)+ (sixteen % 10);
    fourteen = (fourteen % 100/10)+ (fourteen % 10);
    twelve = (twelve % 100/10)+ (twelve % 10);
    ten = (ten % 100/10)+ (ten % 10);
    eight = (eight % 100/10)+ (eight % 10);
    six = (six % 100/10)+ (six % 10);
    four = (four % 100/10)+ (four % 10);
    two = (two % 100/10)+ (two % 10);





    int sum1 = (one + three + five + seven + nine + eleven+ thirteen + fifteen);
    //printf("%ifive\n",five);
    //printf("%isum1\n",sum1);
    int sum2 = (sixteen + fourteen + twelve + ten + eight + six + four + two);
    int total = (sum1 + sum2);
    if ((total % 10) != 0)
    {
        printf("%s\n","INVALID");
        return 0;
    }

    //printf("%i\n",total);
    long visa = card;
    long amex = card;
    long mastercard = card;





    while (card > 0){
        card /= 10;
        length++;
    }
    while (visa >= 10)
    {
        visa /= 10;
    }
    if (visa == 4 && (length == 13 || length == 16))
    {
        printf("%s\n","VISA");
        return 0;
    }
    //For american express
    while (amex >= 10000000000000)
    {
        amex /= 10000000000000;
    }
    if ((amex == 34 || amex == 37) && length == 15)
    {
        printf("%s\n","AMEX");
        return 0 ;
    }
    // for MasterCard
    while (mastercard > 100000000000000)
    {
        mastercard /= 100000000000000;
    }
    if (length == 16 && (mastercard == 51 || mastercard == 52 || mastercard == 53 || mastercard == 54 || mastercard ==55) )
    {
        printf("%s\n","MASTERCARD");
    }


}
