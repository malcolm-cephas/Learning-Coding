% Exp 5: 4-Queens
queens(N, Q) :- numlist(1, N, L), permutation(L, Q), safe(Q).
safe([]).
safe([Q|Qs]) :- safe(Qs), not(attack(Q, Qs, 1)).
attack(Q, [Q1|_], N) :- Q is Q1 + N ; Q is Q1 - N.
attack(Q, [_|Qs], N) :- N1 is N + 1, attack(Q, Qs, N1).
