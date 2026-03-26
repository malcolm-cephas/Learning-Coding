% Exp 10: countLists using accumulators
countLists(List, Ne, Nl) :- h_count(List, 0, 0, Ne, Nl).
h_count([], Ne, Nl, Ne, Nl).
h_count([[]|T], Ce, Cl, Ne, Nl) :- !, Ce1 is Ce + 1, Cl1 is Cl + 1, h_count(T, Ce1, Cl1, Ne, Nl).
h_count([_|T], Ce, Cl, Ne, Nl) :- Cl1 is Cl + 1, h_count(T, Ce, Cl1, Ne, Nl).
