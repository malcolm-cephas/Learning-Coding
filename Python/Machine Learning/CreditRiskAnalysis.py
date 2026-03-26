'''Aim: 5. Find Unconditional and Conditional probabilities in a credit-worthiness dataset.'''

data = [
    {'income': 'high', 'recreation': 'golf', 'job': 'prof', 'status': 'single', 'risk': 'low'},
    {'income': 'med', 'recreation': 'golf', 'job': 'prof', 'status': 'single', 'risk': 'medRisk'},
    {'income': 'low', 'recreation': 'hike', 'job': 'clerical', 'status': 'married', 'risk': 'high'},

]


golf_count = sum(1 for d in data if d['recreation'] == 'golf')
p_golf = golf_count / len(data)


med_risk_data = [d for d in data if d['risk'] == 'medRisk']
single_med_count = sum(1 for d in med_risk_data if d['status'] == 'single')
p_single_given_med = single_med_count / len(med_risk_data) if med_risk_data else 0

print(f"Unconditional P(Golf): {p_golf:.4f}")
print(f"Conditional P(Single | medRisk): {p_single_given_med:.4f}")
