% Exp 7: Traveling salesman problem
edge(a, b, 10). edge(a, c, 15). edge(b, c, 5). edge(b, a, 10).
tsp(Current, Visited, Cost, [Current|Path], Total) :-
    edge(Current, Next, C), not(member(Next, Visited)),
    C1 is Cost + C, tsp(Next, [Next|Visited], C1, Path, Total).
tsp(Current, _, Cost, [Current], Cost).

% Query: tsp(a, [a], 0, Path, Total).
