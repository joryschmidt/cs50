#include <cs50.h>
#include <string.h>
#include <stdio.h>

#include "student.h"

int main(void)
{
  // allocate space for students
  int enrollment = get_int("enrollment: ");
  student students[enrollment];

  for (int i=0; i<enrollment; i++)
  {
    students[i].name = get_string("name: ");
    students[i].dorm = get_string("dorm: ");
  }

  // save students to file
  FILE *file = fopen("students.csv", "w");
  if (file)
  {
    fprintf(file, "name,dorm\n");
    for (int i=0; i<enrollment; i++)
    {
      fprintf(file, "%s,%s\n", students[i].name, students[i].dorm);
    }
    fclose(file);
  }

}