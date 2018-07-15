#include <stdio.h>

// Get an integer from the user using a memory address

int main(void)
{
  int x;
  printf("Integer: ");
  scanf("%i", &x);
  printf("Your integer is %i\n", x);
  printf("And the address in memory is %p\n", &x);
}