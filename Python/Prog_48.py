'''Aim: Reverse string word by word.'''
class py_reverse:
   def revr(self, strs):
       sp=strs.split()
       sp.reverse()
       return " ".join(sp)

s = input("Enter sentence: ")
print("Reversed:", py_reverse().revr(s))
