'''Aim: 9. Back-propagation algorithm for word classification.'''
from sklearn.neural_network import MLPClassifier
import numpy as np

# Binary representation of words (demo)
X = np.array([[0,0], [0,1], [1,0], [1,1]])
y = np.array([0, 1, 1, 0]) # XOR-like classification

# Neural Network using Back-propagation (MLP)
clf = MLPClassifier(solver='lbfgs', alpha=1e-5, hidden_layer_sizes=(5, 2), random_state=1)
clf.fit(X, y)

print(f"Predicted class for [1,0]: {clf.predict([[1,0]])[0]}")
