'''Aim: 1. Apply Baye's rule to find the probability of being absent on Friday.'''

# P(Friday) = 20% = 0.20
# P(Friday and Absent) = 3% = 0.03
# To find: P(Absent | Friday)
# formula: P(A | B) = P(A and B) / P(B)

p_friday = 0.20
p_fri_and_absent = 0.03

# Bayes Calculation
p_absent_given_friday = p_fri_and_absent / p_friday

print(f"P(Friday): {p_friday}")
print(f"P(Friday and Absent): {p_fri_and_absent}")
print(f"P(Absent | Friday): {p_absent_given_friday * 100:.2f}%")
