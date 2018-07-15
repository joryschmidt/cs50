#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
  string s = get_string("name: ");
  printf("\n");
  for (int i=0; i < strlen(s); i++) {
    printf("  ");
    for (int j=0; j<i; j++) {
      printf("  ");
    }
    printf("%c\n", s[i]);
  }
  printf("\n");
}