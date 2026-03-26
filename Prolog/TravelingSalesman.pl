% Exp 6: Traveling Salesman
edge(a, b, 10). edge(a, c, 15). edge(b, c, 5).
tsp(Start, Path, Dist) :- h_tsp(Start, [Start], 0, Path, Dist).
h_tsp(Curr, Visited, D, Visited, D). % Placeholder logic
