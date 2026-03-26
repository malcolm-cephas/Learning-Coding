% Exp 5: 8 Puzzle problems
% Goal state 1 2 3 / 4 5 6 / 7 8 0
goal([1, 2, 3, 4, 5, 6, 7, 8, 0]).

% Possible moves (simplified logic)
move(L1, L2) :- select(0, L1, X, L), select(X, L, 0, L2). % Random swap for demo

% solve(initial, path).
