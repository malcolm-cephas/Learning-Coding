'''Aim: 7. Tower of Hanoi.'''

def hanoi(n, source, target, aux):
    if n > 0:
        hanoi(n - 1, source, aux, target)
        print(f"Move disk {n} from {source} to {target}")
        hanoi(n - 1, aux, target, source)

print("Tower of Hanoi (3 disks):")
hanoi(3, 'A', 'C', 'B')
