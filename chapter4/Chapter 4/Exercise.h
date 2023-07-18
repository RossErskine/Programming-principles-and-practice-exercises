#pragma once
#include "Word_Calculator.h"
#include "RiceGrain.h"
#include "Quadratic_formula.h"
#include "Vector.h"
#include "names_n_scores.h"
#include "Currency.h"
#include <algorithm> // sort() 


class Exercise
{
public:
	void runExercise(); //interface
	

private:
	// Declarations //
	// Exercise 1: Currency converter
	void exercise1();
	void tryThisCharacterConverter();
	void tryThisBleep();
	// Exercise 2 
	// TODO..
	void exercise2();
	void exercise_6();
	void exercise_10();
	void exercise_11();
	bool find_prime(int n);
	void exercise_18();
	void exercise_19();

	Currency currency;
	Word_Calculator word_calc;
	RiceGrain rg;
	//RockPaperScissors rps;
	Vector IVector;
	Quadratic_formula qf;
	names_n_scores ns;
	
};

