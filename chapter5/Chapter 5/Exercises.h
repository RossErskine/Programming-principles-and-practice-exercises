#pragma once
#include <iostream>
#include <vector>
#include "Quadratic_formula.h"
#include "myVector.h"
#include <time.h>

using namespace std;

//===declarations===//
Quadratic_formula qf;
myVector<double> doubleVector;
myVector<int> integerVector;

//display vector
template <typename T>
void displayVec(vector<T> v)
{
	for (int i = 0; i != v.size(); i++){
		cout << v[i] << '\t';
	}
	cout << endl;
}

/* Exercies2: find errrors
list of changes:
1)change d to c (line 15)
2)delete "" (line 16)
3)change Cout to cout (line 17)
4) change /n to \n (line  17)
5) change int to k (line 9)
6) add ; (line 9)
7) change int to double (line 8)
*/
double ctok(double c)
{
	if (c <= -273.15){
		/* Exercise 4 
		* Check for absolute zero
		*/
		throw "Below absolute zero!";
	}
	double k = c + 273.15;
	return k;
}
double ktoc(double k)
{ 
	if (k <= 0){
		/* Exercise 3
		* Check for absolute zero
		*/
		throw "Below absolute zero!";
	}
	double c = k - 273.15;
	return c;
}
void exercise_2to6()
{
	try {
		char type;
		double c = 0;
		double k = 0;
		
		cout << "Enter temperature type? c for Celsius or k for Kelvin"<< endl;
		cin >> type;
		
		/* Exercise 5
		* Convert Kelvin to Celsius
		 */
		switch (type)
		{
		case 'c':
			cout << "Enter temp in Celsius:" <<endl;
			cin >> c;
			k = ctok(c);
			cout << k << '\n';
			break;
		case 'k':
			cout << "Enter temp in Kelvin: "<< endl;
			cin >> k;
			c = ktoc(k);
			cout << c << '\n';
			break;
		default:
			cerr << "wrong type" << endl;
			exercise_2to6();
			break;
		}
		
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}
}
/*================================================================================
* Write a program that can calculate x for a quadratic equation. Create a function
* that prints out the roots of a quadratic equation, given a, b, c. When the program 
* detects an equation with no real roots, have it print out a message.
*/
void exercise_7()
{
	try {
		double a, b, c;
		cout << "Enter Quadratic Formula: a, b & c " << endl;
		cin >> a >> b >> c;
		qf.quad_Ans_plus(a, b, c);
		qf.quad_Ans_minus(a, b, c);
		if (qf.GetPlusX() == qf.GetMinusX())
		{
			cout << "only one root!" << endl;
			cout << "+X & -X = " << qf.GetPlusX() << endl;
		}
		else
		{
			cout << "+X = " << qf.GetPlusX() << endl;
			cout << "-X = " << qf.GetMinusX() << endl;
		}
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}
}
/* =============================================================================
* 8) Write a program that reads and stores a series of integers and then computes the 
* sum of the first N integers. First ask for N then read the values into a vector,
* then calculate the sum of the first N values. 
* 9) Modify to write an error if the results cannot be represented as an int
* 10) Use doubles instead of ints, also make a vector of differences.
*/
void exercise_8to10()
{
	try {
		double sum = 0;
		double dif = 0;
		cout << "Please enter the number of values you want to sum:" << endl;
		cin >> sum;
		cout << "Please enter some integers (press'|' to stop):" << endl;
		for (double temp; cin >> temp;){
			integerVector.add_vector(temp);
		}
		if (integerVector.vector_size() < sum){
			throw "vector not big enough!";
		}
		integerVector.DisplaySumOfSumVec(sum);
		integerVector.DisplayVecDiff();
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}
}
void yr2()
{
	bool run = true;
	while (run == true)
	{
		vector<int>score = { 62,86,77,77,78 };
		int Fscore = 0;
		cout << "enter score: " << endl;
		cin >> Fscore;
		score.push_back(Fscore);
		double sum = accumulate(score.begin(), score.end(), 0);
		double mean = sum / score.size();
		cout << "average: " << mean << endl;
		score.pop_back();

	}
}
/* ===========================================================================
* Write a program that writes out the first so many values of the Fibanacci series.
* Find the largest nuber in the series that fits in an int.
*/

void exercise_11()
{
	try
	{
		vector<int> v{ 1,1 };
		int a = 1, b = 1, c = 0;
		do
		{
			c = a + b;
			v.push_back(c);
			a = b;
			b = c;
		
		} while (a < b);
		v.pop_back();//takes out the non-int number
		for (int i = 0; i != v.size(); i++)
		{
			cout << v[i] << '\t';
		}
		cout << endl;
		cout << "Last fibonacci element that fits in an 'int' is: "<< v.back() << endl;
	}
	catch(runtime_error e)
	{
		cout << e.what() <<  endl;
	}
}
/*==============================================================================
* 12) Implement a guessing game called "Bulls and Cows". The program has a vector of four 
* different integers in the range 0 - 9, it's the user's task to discover those numbers 
* by repeating guesses. Say the number to be guessed is 1234 and the user guesses 1359;
* the response should be "1 bull and 1 cow" because the user got one digit right in the 
* right position and 1 right but in the wrong position. 
* 13) Make a version where the user can play repeatedly, and each new game has a set of 
* new digits
*/
int com = 0, ply = 0;
int win = 0;
void checkguess(vector<int> a, vector<int> b)
{
	
	for (int i = 0; i != a.size(); i++)
	{

		switch (i)
		{
		case 0:
			if (a[0] == b[0]) { cout << "Bull"; win++; }
			else if (a[0] == b[1]) { cout << "Cow"; }
			else if (a[0] == b[2]) { cout << "Cow"; }
			else if (a[0] == b[3]) { cout << "Cow"; }
			break;
		case 1:
			if (a[1] == b[1]) {
				cout << "Bull"; win++;
			}
			else if (a[1] == b[0]) { cout << "Cow"; }
			else if (a[1] == b[2]) { cout << "Cow"; }
			else if (a[1] == b[3]) { cout << "Cow"; }
			break;
		case 2:
			if (a[2] == b[2]) {
				cout << "Bull"; win++;
			}
			else if (a[2] == b[0]) { cout << "Cow"; }
			else if (a[2] == b[1]) { cout << "Cow"; }
			else if (a[2] == b[3]) { cout << "Cow"; }
			break;
		case 3:
			if (a[3] == b[3]) { cout << "Bull"; win++; }
			else if (a[3] == b[0]) { cout << "Cow"; }
			else if (a[3] == b[1]) { cout << "Cow"; }
			else if (a[3] == b[2]) { cout << "Cow"; }
			break;
		default:
			cout << " ";
			break;
		}
		

	}
}

void exercise_12t013()
{
	try
	{
		int t;
		int l = 0;
		int s = 0;
		bool play = true;
		vector<int> g;
		vector<int> p;
		srand((unsigned)time(0));
		while (play == true)
		{

			while (g.size() < 4)
			{
				int temp1 = (rand() % 9) + 1;

				bool not_unique = false;
				if (g.size() == 0)
				{
					g.push_back(temp1);
				}
				else
				{
					for (int i : g)
					{
						if (i == temp1)
						{
							not_unique = true;
						}
					}
					if (!not_unique)
					{
						g.push_back(temp1);

					}
				}
			}
			displayVec(g);
			bool guess = true;
			while (guess==true)
			{
				cout << "\nPlease enter your guess: " << endl;
				while (p.size() != 4)
				{
					cin >> t;
					if (t > 9)
					{
						throw "too large an integer! ";
					}
					for (int i = 0; i != p.size(); i++)
					{
						if (t == p[i])
						{
							throw "that number has already been picked";
						}
					}
					p.push_back(t);
				}
				displayVec(p);
				checkguess(p, g);
				if (win == 4)
				{
					ply++;
					cout << "\nYou win that round! " << endl;
					guess = false;
					win = 0;
				}
				if (l == 10)
				{
					com++;
					guess = false;
				}
				p.clear();
				
				l++;
			}
			g.clear();
			
			if (ply == 3)
			{
				throw "\nYOU WIN! ";
				play = false;
			}
			if (com == 3)
			{
				throw "\nLOSER!";
				play = false;
			}
			
		}
	}
	catch (runtime_error e)
	{
		cout << e.what() << endl;
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}
}

int DisplaySumOfVec(vector<int> vec)
{
	int sum = accumulate(vec.begin(), vec.end(), 0);
	return sum;
}
/*============================================================================
* Read day-of-the-week value pairs from standard input. For example:
* Tuesday 23 Friday 56 Tuesday -3 Thursday 99
* Collect all values for each of the week in a vector. Write out the values of the seven 
* day-of-the-week vectors. Print out the sum of the values in each vector. Ignore 
* illegal days of the week, such as Funday, but except common synonyms such as Mon monday. 
* write out rejected values.
*/
void exercise_14()
{
	try {
		vector<int>mon;
		vector<int>tue;
		vector<int>wed;
		vector<int>thu;
		vector<int>fri;
		vector<int>sat;
		vector<int>sun;
		vector<int>rej;
		string dow;
		int val = 0;

		bool play = true;

		while (play == true)
		{
			cout << "Enter day of the week: followed by value: " << endl;
			cin >> dow >> val;
			if (!cin)
			{
				throw "input not recognised ";
			}
			if (dow == "quit")
			{
				play = false;
			}
			else if ((dow == "Mon") || (dow == "Monday") || (dow == "monday"))
			{
				mon.push_back(val);
			}
			else if ((dow == "Tue") || (dow == "Tuesday") || (dow == "tuesday"))
			{
				tue.push_back(val);
			}
			else if ((dow == "Wed") || (dow == "Wednesday") || (dow == "wednesday"))
			{
				wed.push_back(val);
			}
			else if ((dow == "Thu") || (dow == "Thursday") || (dow == "thursday"))
			{
				thu.push_back(val);
			}
			else if ((dow == "Fri") || (dow == "Friday") || (dow == "friday"))
			{
				fri.push_back(val);
			}
			else if ((dow == "Sat") || (dow == "Saturday") || (dow == "saturday"))
			{
				sat.push_back(val);
			}
			else if ((dow == "Sun") || (dow == "Sunday") || (dow == "sunday"))
			{
				sun.push_back(val);
			}
			else
			{
				rej.push_back(val);
			}
		}
		cout << "sum of Mondays values: " << DisplaySumOfVec(mon) << endl;
		cout << "sum of Tuesdays values: " << DisplaySumOfVec(tue) << endl;
		cout << "sum of Wednesdays values: " << DisplaySumOfVec(wed) << endl;
		cout << "sum of Thursdays values: " << DisplaySumOfVec(thu) << endl;
		cout << "sum of Fridays values: " << DisplaySumOfVec(fri) << endl;
		cout << "sum of Saturdays values: " << DisplaySumOfVec(sat) << endl;
		cout << "sum of Sundays values: " << DisplaySumOfVec(sun) << endl;
		cout << "rejected values: ";
		displayVec(rej);

		
	}
	catch (runtime_error e)
	{
		cout << e.what() << endl;
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}
}

