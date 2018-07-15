#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
  string name = get_string("Name: ");
  char initials[4];
  int count = 0;
  for (int i=0; i < strlen(name); i++)
  {
    if (isupper(name[i]))
    {
      initials[count] = name[i];
      count++;
    }
  }
  initials[count] = '\0';
  printf("%s\n", initials);
}