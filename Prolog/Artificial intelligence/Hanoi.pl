% Exp 4: Tower of Hanoi
hanoi(1, Source, Target, _) :-
    write('Move disk from '), write(Source), write(' to '), write(Target), nl.
hanoi(N, Source, Target, Aux) :-
    N > 1,
    N1 is N - 1,
    hanoi(N1, Source, Aux, Target),
    hanoi(1, Source, Target, _),
    hanoi(N1, Aux, Target, Source).

% Query: hanoi(3, 'A', 'C', 'B').
