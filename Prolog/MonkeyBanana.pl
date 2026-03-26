% Exp 3: Monkey and Banana
move(state(at_door, on_floor, at_win, has_not), 
     walk(at_door, middle), 
     state(middle, on_floor, at_win, has_not)).
move(state(P1, on_floor, P1, has_not), 
     climb(P1), 
     state(P1, on_box, P1, has_not)).
move(state(P1, on_box, P1, has_not), 
     grasp(P1), 
     state(P1, on_box, P1, has)).
can_get(state(_, _, _, has)).
can_get(S1) :- move(S1, _, S2), can_get(S2).
