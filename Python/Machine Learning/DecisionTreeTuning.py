'''Aim: 6. Implementation of Decision tree using sklearn and parameter tuning.'''
from sklearn.tree import DecisionTreeClassifier
from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split


iris = load_iris()
X = iris.data
y = iris.target

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=42)


model = DecisionTreeClassifier(criterion='entropy', max_depth=3)
model.fit(X_train, y_train)

accuracy = model.score(X_test, y_test)
print(f"Decision Tree Accuracy (depth=3): {accuracy * 100:.2f}%")
