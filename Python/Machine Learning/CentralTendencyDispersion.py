'''Aim: 1. Python program to compute Central Tendency Measures and Measures of Dispersion.'''
import numpy as np
import statistics
from scipy import stats

data = [10, 20, 20, 30, 40, 50, 60]

# Central Tendency
mean = np.mean(data)
median = np.median(data)
mode = statistics.mode(data)

# Dispersion
variance = np.var(data)
std_dev = np.std(data)

print(f"Data: {data}")
print(f"Mean: {mean} | Median: {median} | Mode: {mode}")
print(f"Variance: {variance:.2f} | Std Dev: {std_dev:.2f}")
