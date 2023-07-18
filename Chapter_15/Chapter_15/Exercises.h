#pragma once
#include <iostream>

using namespace std;

// === Exercise 1 === //
int recurring_factorial(int n) { return n > 1 ? n*recurring_factorial(n - 1) : 1; }
int iterative_factorial(int n) {
	int factorial = 1;
	while (n > 1) {
		factorial *= n;
		--n;
	}
	return factorial;
}

// === Exercise 2 === //
class Func : public Function
{
public:
	Func(Fct f, double r1, double r2, Point o, int NoP, double xs, double ys)
		:Function{ f, r1, r2, o, NoP, xs, ys }, function(f), range1{ r1 },range2{ r2 }, 
		origin{ o }, num_of_points{ NoP }, x_scale{ xs }, y_scale{ ys } {}

	
	void resetFunction(Fct f) { function = f; }
	void resetRange(double r1, double r2) { 
		range1 = r1;
		range2 = r2; 
	}
	void resetOrigin(int x, int y) { 
		origin.x = x;
		origin.y = y;
	}
	void resetNum_of_points(int NoP) { num_of_points = NoP; }
	void resetScale(double x, double y) {
		x_scale = x;
		y_scale = y;
	}

private:
	Fct* function;
	double range1;
	double range2;
	Point origin;
	int num_of_points;
	double x_scale;
	double y_scale;
};

void runExercises()
{
	cout << "Recurring factorial: " << recurring_factorial(4) << '\n'
		<< "Iterative factorial: " << iterative_factorial(4) << endl;
}
