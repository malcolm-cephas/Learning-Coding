'''Aim: 4. K-Means clustering prediction for specific VAR1 and VAR2 values.'''
from sklearn.cluster import KMeans
import numpy as np

# Sample Data (VAR1, VAR2)
X = np.array([
    [0.1, 0.2], [0.15, 0.25], [0.8, 0.9], 
    [0.85, 0.85], [1.0, 1.1], [0.5, 0.5],
    [0.55, 0.45], [0.9, 0.6], [0.95, 0.5]
])

# K-Means with 3 centroids
kmeans = KMeans(n_clusters=3, random_state=0)
kmeans.fit(X)

# Predict for VAR1=0.906, VAR2=0.606
test_case = np.array([[0.906, 0.606]])
cluster = kmeans.predict(test_case)

print(f"Predicted cluster for VAR1=0.906, VAR2=0.606: {cluster[0]}")
