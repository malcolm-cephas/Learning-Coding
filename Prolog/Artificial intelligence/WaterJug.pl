% Exp 8: Water jug problem
% fill(capacity1, capacity2, target)
fill(X, Y) :- X = 2 ; Y = 2.
fill(X, Y) :- X < 4, fill(4, Y).
fill(X, Y) :- Y < 3, fill(X, 3).
fill(X, Y) :- X > 0, fill(0, Y).
fill(X, Y) :- Y > 0, fill(X, 0).
fill(X, Y) :- X > 0, Y < 3, T is min(X, 3-Y), X1 is X-T, Y1 is Y+T, fill(X1, Y1).
fill(X, Y) :- Y > 0, X < 4, T is min(Y, 4-X), Y1 is Y-T, X1 is X+T, fill(X1, Y1).

% solve(fill(0, 0)).
