'''Aim: 1. Apply Baye's rule to find the probability of being absent on Friday.'''






p_friday = 0.20
p_fri_and_absent = 0.03


p_absent_given_friday = p_fri_and_absent / p_friday

print(f"P(Friday): {p_friday}")
print(f"P(Friday and Absent): {p_fri_and_absent}")
print(f"P(Absent | Friday): {p_absent_given_friday * 100:.2f}%")
