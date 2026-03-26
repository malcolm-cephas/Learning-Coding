'''Aim: 5. Water-Jug problem in Python.'''

def water_jug(a, b, target):
    visited = set()
    queue = [(0, 0)]
    while queue:
        ca, cb = queue.pop(0)
        if (ca, cb) in visited: continue
        visited.add((ca, cb))
        if ca == target or cb == target: return True

        queue.extend([(a, cb), (ca, b), (0, cb), (ca, 0), (max(0, ca-(b-cb)), min(b, cb+ca)), (min(a, ca+cb), max(0, cb-(a-ca)))])
    return False

print(f"Can target 2 liters from 4 and 3 gal jugs? {water_jug(4, 3, 2)}")
