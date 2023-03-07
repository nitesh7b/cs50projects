#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int x,a,b;
  do{
    x = get_int("Height: ");
    ///printf("#\n");
  }
  while(x < 1 || x > 8);
  for(a = 0; a < x; a++){
    for (int space = 0; space < x - a - 1;space++)
    {
        printf(" ");
    }
    for (b = 0; b <= a ;b++){
        printf("#");
    }
    printf("\n");

  }

}
