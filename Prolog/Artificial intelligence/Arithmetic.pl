% Exp 2: Simple arithmetic
sum(X, Y, S) :- S is X + Y.
factorial(0, 1).
factorial(N, F) :- N > 0, N1 is N - 1, factorial(N1, F1), F is N * F1.

% Query: sum(10, 20, S).
% Query: factorial(5, F).
