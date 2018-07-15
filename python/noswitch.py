from cs50 import get_char

# If you write more than one character it prompts you forever
c = get_char("Yes or no?: ")

if c == 'Y' or c == 'y':
  print("Yes")
elif c == 'N' or c == 'n':
  print("No")
else:
  print("Invalid response. You must write one of these characters: YyNn")