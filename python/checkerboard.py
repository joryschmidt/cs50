# Makes a checkerboard of specified length

from cs50 import get_int

size = get_int("How many rows and columns would you like? ")

for i in range(size):
  for j in range(size):
    if (i + j) % 2 == 0:
      print("#", end="")
    else:
      print(" ", end="")
  print()