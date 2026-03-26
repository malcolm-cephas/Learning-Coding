'''Aim: Recursive function that generates all binary strings of n-bit length.'''

def generate_binary(n, current_string=""):
    if n == 0:
        print(current_string)
        return


    generate_binary(n - 1, current_string + "0")
    generate_binary(n - 1, current_string + "1")

n_bits = int(input("Enter length of binary strings (n): "))
print(f"Binary strings of length {n_bits}:")
generate_binary(n_bits)
