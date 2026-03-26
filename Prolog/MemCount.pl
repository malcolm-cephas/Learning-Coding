% Exp 11: memCount without accumulator
memCount(_, [], 0).
memCount(X, [X|T], N) :- !, memCount(X, T, N1), N is N1 + 1.
memCount(X, [_|T], N) :- memCount(X, T, N).
