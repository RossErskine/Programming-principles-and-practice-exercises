#pragma once
#include "Word_Calculator.h"
#include "RiceGrain.h"
#include "Quadratic_formula.h"
#include "Vector.h"
#include "names_n_scores.h"


class Exercise
{
public:
	Exercise();
	~Exercise();
	void runExercise();
	

private:
	void exercise_6();
	void exercise_10();
	void exercise_11();
	bool find_prime(int n);
	void exercise_18();
	void exercise_19();

	Word_Calculator word_calc;
	RiceGrain rg;
	//RockPaperScissors rps;
	Vector IVector;
	Quadratic_formula qf;
	names_n_scores ns;
	
};

