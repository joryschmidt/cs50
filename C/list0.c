#include <stdio.h>
#include <cs50.h>

// Get a list of numbers from the user without duplicates and then print them out
int main(void)
{
  int capacity;
  do
  {
    capacity = get_int("capacity: ");
  } while (capacity < 1);

  int numbers[capacity];

  int size = 0;
  while (size < capacity) {
    int number = get_int("number: ");

    // no duplicates!
    bool found = false;
    for (int i=0; i<size; i++) {
      if (numbers[i] == number) {
        found = true;
        printf("no duplicates! ");
        break;
      }
    }

    if (!found) {
      numbers[size] = number;
      size++;
    }
  }

  // print out the numbers
  for (int i=0; i<size; i++)
  {
    printf("%i ", numbers[i]);
  }
  printf("\n");
}