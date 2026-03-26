% Exp 4: Medical Diagnosis
diagnosis(influenza) :- has_symptom(fever), has_symptom(cough), !.
diagnosis(cold) :- has_symptom(cough).
has_symptom(fever).
has_symptom(cough).
% Cuts: Advantage is speed, disadvantage is logic change.
