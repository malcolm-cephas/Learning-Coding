'''Aim: 7. Implementation of KNN using sklearn.'''
from sklearn.neighbors import KNeighborsClassifier
from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split

# Iris Dataset
iris = load_iris()
X = iris.data
y = iris.target

# Train/Test Split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# KNN Model (k=3)
knn = KNeighborsClassifier(n_neighbors=3)
knn.fit(X_train, y_train)

# Accuracy
acc = knn.score(X_test, y_test)
print(f"KNN Accuracy (k=3): {acc * 100:.2f}%")
