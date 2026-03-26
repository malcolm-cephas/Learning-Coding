'''Aim: 10. Performance analysis of Classification Algorithms (Mini Project)'''
from sklearn.metrics import classification_report, accuracy_score
from sklearn.tree import DecisionTreeClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.datasets import load_digits
from sklearn.model_selection import train_test_split


data = load_digits()
X = data.data
y = data.target
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=42)


clf1 = LogisticRegression(max_iter=10000); clf1.fit(X_train, y_train)
y_pred1 = clf1.predict(X_test)


clf2 = DecisionTreeClassifier(); clf2.fit(X_train, y_train)
y_pred2 = clf2.predict(X_test)

print("--- Performance Report ---")
print(f"LogReg Accuracy: {accuracy_score(y_test, y_pred1)*100:.2f}%")
print(f"DecTree Accuracy: {accuracy_score(y_test, y_pred2)*100:.2f}%")
print("\nClassification Report (DecTree):")
print(classification_report(y_test, y_pred2))
