% Exp 9: BST addLeaf
gt(A, B) :- A > B.
addLeaf(nil, X, t(nil, X, nil)).
addLeaf(t(L, V, R), X, t(NL, V, R)) :- gt(V, X), addLeaf(L, X, NL).
addLeaf(t(L, V, R), X, t(L, V, NR)) :- gt(X, V), addLeaf(R, X, NR).
