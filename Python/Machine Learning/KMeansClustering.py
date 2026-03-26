'''Aim: 9. Implementation of K-Means Clustering.'''
from sklearn.cluster import KMeans
import numpy as np

# Unlabeled Data
X = np.array([[1, 2], [1, 4], [1, 0], [10, 2], [10, 4], [10, 0]])

# Clustering (k=2)
kmeans = KMeans(n_clusters=2, random_state=0)
kmeans.fit(X)

print("Cluster Center 1:", kmeans.cluster_centers_[0])
print("Cluster Center 2:", kmeans.cluster_centers_[1])

# Labelling new data
new_pts = np.array([[0, 0], [12, 3]])
print(f"Predicted clusters for {new_pts}: {kmeans.predict(new_pts)}")
