'''Aim: Define a module to find Fibonacci Numbers and import it into another script.'''

# This file acts as both the module and the demo
def get_fib(n):
    fib_list = []
    a, b = 0, 1
    while len(fib_list) < n:
        fib_list.append(a)
        a, b = b, a + b
    return fib_list

if __name__ == "__main__":
    n = int(input("How many Fibonacci numbers? "))
    print(get_fib(n))
