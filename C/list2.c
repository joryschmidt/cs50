#include <cs50.h>
#include <stdio.h>

typedef struct node
{
  int number;
  struct node *next;
}
node;

int main(void)
{
  node *numbers = NULL;

  while (true)
  {
    int number = get_int("number: ");

    if (number == INT_MAX)
    {
      break;
    }

    bool found = false;
    for (node *ptr = numbers; ptr != NULL; ptr = ptr->next)
    {
      if (ptr->number == number)
      {
        found = true;
        printf("NO DUPLICATES! ");
        break;
      }
    }

    if (!found)
    {
      node *n = malloc(sizeof(node));
      if (!n)
      {
        return 1;
      }

      n->number = number;
      n->next = NULL;

      if (!numbers)
      {
        numbers = n;
      }
      else
      {
        for (node *ptr = numbers; ptr != NULL; ptr = ptr->next)
        {
          if (!ptr->next)
          {
            ptr->next = n;
            break;
          }
        }
      }
    }

    if (number == 10)
    {
      for (node *ptr = numbers; ptr != NULL; ptr = ptr->next)
      {
        printf("%i %p\n", ptr->number, ptr);
      }
      break;
    }

  }
  // free memory
  node *ptr = numbers;
  while (ptr != NULL)
  {
    node *next = ptr->next;
    free(ptr);
    ptr = next;
  }
}