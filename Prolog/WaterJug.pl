% Exp 7: Water Jug
% state(Jug1, Jug2)
move(state(X, Y), state(4, Y)) :- X < 4. % Fill 4-gal
move(state(X, Y), state(X, 3)) :- Y < 3. % Fill 3-gal
can_reach(state(2, _)).
can_reach(S) :- move(S, S1), can_reach(S1).
