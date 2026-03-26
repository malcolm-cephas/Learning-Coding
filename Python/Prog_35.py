'''Aim: Implement Digital Logic Gates - AND, OR, NOT, EX-OR.'''

def AND_gate(a, b): return int(a and b)
def OR_gate(a, b): return int(a or b)
def NOT_gate(a): return int(not a)
def XOR_gate(a, b): return int(a != b)

# Demonstration
print("Logic Gates (Input 1, Input 0):")
print(f"AND: {AND_gate(1, 0)}")
print(f"OR : {OR_gate(1, 0)}")
print(f"NOT(1): {NOT_gate(1)}")
print(f"XOR: {XOR_gate(1, 0)}")
