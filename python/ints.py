from cs50 import get_int

def main():
  # Prompt user for numbers
  x = get_int("integer: ")
  y = get_int("integer: ")

  # Do stuff with those numbers and show user
  print(f"{x} + {y} = {x + y}")
  print(f"{x} - {y} = {x - y}")
  print(f"{x} * {y} = {x * y}")
  print(f"{x} / {y} = {x / y}")
  print(f"{x} // {y} = {x // y}")
  print(f"{x} % {y} = {x % y}")

main()