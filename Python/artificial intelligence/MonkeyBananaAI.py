'''Aim: 8. Monkey Banana Problem in Python.'''

class State:
    def __init__(self, monk_pos, monk_on, box_pos, banana_pos, has_banana):
        self.monk_pos = monk_pos; self.monk_on = monk_on; self.box_pos = box_pos
        self.banana_pos = banana_pos; self.has_banana = has_banana

def can_get(s):
    if s.has_banana: return True
    if s.monk_pos == s.box_pos and s.box_pos == s.banana_pos and s.monk_on == 'box':
        s.has_banana = True; return True
    return False

s = State('door', 'floor', 'middle', 'middle', False)
print("Monkey-Banana Logic (States and actions defined in Python).")
