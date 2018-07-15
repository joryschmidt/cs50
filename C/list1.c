#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int *numbers = malloc(sizeof(int));
  printf("%p\n", numbers);
  int capacity = 0;

  //prompt numbers
  int size = 0;
  while (true)
  {
    int number = get_int("number: ");

    if (number == INT_MAX)
    {
      break;
    }

    bool found = false;
    for (int i=0; i<size; i++)
    {
      if (numbers[i] == number)
      {
        found = true;
        printf("NO DUPLICATES! ");
        break;
      }
    }

    if (!found)
    {
      if (size == capacity)
      {
        numbers = realloc(numbers, sizeof(int) * (size + 1));
        if (!numbers)
        {
          return 1;
        }
        capacity++;
      }

      numbers[size] = number;
      size++;
    }

    if (number == 10)
    {
      for (int i=0; i<size; i++)
      {
        printf("%i ", numbers[i]);
      }
      printf("\n");
      free(numbers);
      break;
    }
  }

}