#include <stdio.h>
#include <cs50.h>

int main(void)
{
  string s = get_string("name: ");
  int n = 0;
  // '\0' is how one refers to the terminal character of strings in C
  while (s[n] != '\0')
  {
    n++;
  }
  printf("The length is %i\n", n);
}