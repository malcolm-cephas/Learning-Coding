'''Aim: Define a module and import a specific function in that module to another program.'''

from Prog_51 import get_fib

n = 5
print(f"First {n} Fibonacci numbers (imported):")
print(get_fib(n))
