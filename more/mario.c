#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int number, row,column,space;
  do{
    number  = get_int("Height: ");
  }
  while(number < 1 || number > 8 );

  for (row = 0; row < number;row++){
    for (space = 0;space < number - row - 1;space++){
      printf(" ");
    }


    for (column = 0; column <= row; column++)
    {
      printf("#");
    }

    printf("  ");
    for (column =0 ; column <= row; column++){
        printf("#");
      }
    printf(" \n");
  }

}
