# An example of docstring convention and the __doc__ attribute

def main():
  """This function says 'Hello, world'"""
  print("Hello, world")
  print(f'The docstring of the main function is "{main.__doc__}"')

main()