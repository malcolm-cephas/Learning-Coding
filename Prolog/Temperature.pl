% Exp 2: Temperature conversion
c_to_f(C, F) :- F is (C * 9/5) + 32.
is_freezing(C) :- C < 0.
