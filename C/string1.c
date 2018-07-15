#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
  char *s = get_string("s: ");
  int i=0;
  while (*(s + i) != '\0')
  {
    printf("%p ", (s + i));
    printf("%c\n", *(s + i));
    i++;
  }
}