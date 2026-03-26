'''Aim: 7. Naive Bayes theorem for English text classification.'''
from sklearn.feature_extraction.text import CountVectorizer
from sklearn.naive_bayes import MultinomialNB

# Sample Data
texts = ["I love programming", "Python is great", "Sports are fun", "Football is a game"]
labels = ["tech", "tech", "sports", "sports"]

# Vectorization
vectorizer = CountVectorizer()
X = vectorizer.fit_transform(texts)

# Training
clf = MultinomialNB()
clf.fit(X, labels)

# Prediction
test_text = ["Python is awesome"]
X_test = vectorizer.transform(test_text)
pred = clf.predict(X_test)

print(f"Predicted class for '{test_text[0]}': {pred[0]}")
