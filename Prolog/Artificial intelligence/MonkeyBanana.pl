% Exp 3: Monkey banana problem
% State: at(Monkey, Box, Banana, Has)
move(state(at_door, middle, at_window, has_not),
     walk(at_door, middle),
     state(middle, middle, at_window, has_not)).

move(state(P1, P1, P1, has_not),
     push(P1, P2),
     state(P2, P2, P1, has_not)).

move(state(P1, P1, P1, has_not),
     grasp,
     state(P1, P1, P1, has)).

can_get(state(_, _, _, has)).
can_get(S1) :- move(S1, _, S2), can_get(S2).
