'''Aim: 8. Implementation of Logistic Regression using sklearn.'''
from sklearn.linear_model import LogisticRegression
from sklearn.datasets import load_breast_cancer
from sklearn.model_selection import train_test_split


data = load_breast_cancer()
X = data.data
y = data.target

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.25, random_state=1)


log_reg = LogisticRegression(max_iter=10000)
log_reg.fit(X_train, y_train)


acc = log_reg.score(X_test, y_test)
print(f"Logistic Regression Accuracy: {acc * 100:.2f}%")
