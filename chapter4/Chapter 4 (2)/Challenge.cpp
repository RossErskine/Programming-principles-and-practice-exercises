#include "Challenge.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
* A program that consists of a while-loop that each time around the loop 
* reads in two ints and then prints them. 
* Exit program when a terminating '|' is entered. 
*/
void Challenge::Drill_1(){
	int value1, value2;
	bool fin = true;
	while (fin == true){
		cout << "Enter 2 Values: " << endl << endl;
		cin >> value1 >> value2;
		if (!cin){
			 fin = false;
			 cout << "Thanks for playing!";
			 return;
		}
		cout << "The values entered was: " << value1 << " & " << value2 << endl;
	}
	
}

/*
* 2. Change Drill one to write out 'the smaller value is:' followed by the
*	 smaller of the number and 'the larger value is:' followed by the larger value.
* 3. Augment the program so that it writes the line 'the numbers are equal'
*	 (only) if they are equal.
*/
void Challenge::Drill_2n3(){
	int value1, value2;
	bool fin = true;
	while (fin == true) {
		cout << "Enter 2 values: " << endl << endl;
		cin >> value1 >> value2;
		if (!cin) {
			fin = false;
			cout << "Thanks for playing!";
			return;
		}
		else {
			if (value1 < value2) {
				cout << "the smaller value is: " << value1 << '\n'
					<< "the larger value is:" << value2 << endl;
			}
			else if (value1 == value2) {
				cout << "the numbers are equal " << endl;
			}
			else {
				cout << "the smaller value is: " << value2 << '\n'
					<< "the larger value is:" << value1 << endl;
			}
		}
	}
}
/*
* 4. Change the program so it uses double instead of intgers
* 5. Change the program so that it writes ot 'the numbers are almost equal'
*	after writing out which is larger and the smaller if the two number
*	differ by less than 1.0/100
*/
void Challenge::Drill_4n5(){
	double value1, value2;
	double epsilon = 0.01; // 1.0/100
	bool fin = true;
	while (fin == true) {
		cout << "Enter 2 values: " << endl << endl;
		cin >> value1 >> value2;
		if (!cin) {
			fin = false;
			cout << "Thanks for playing!";
			return;
		}
		else {
			if (value1 < value2) {
				cout << "the smaller value is: " << value1 << '\n'
					<< "the larger value is:" << value2 << endl;
				if ((value2 - value1) < epsilon) {
					cout << "the numbers are almost equal" << endl;
				}
			}
			else if (value1 == value2) {
				cout << "the numbers are equal " << endl;
			}
			else {
				cout << "the smaller value is: " << value2 << '\n'
					<< "the larger value is:" << value1 << endl;
				if ((value1 - value2) < epsilon) {
					cout << "the numbers are almost equal" << endl;
				}
			}
		}
	}
}
/*
* 6. Change the body of the loop so that it reads just one double each time round. 
* define two variables to keep track of which is the smallest and which is the 
* largest value you have seen so far. Each time through the loop write out the 
* value entered. If it is the smallest so far, write 'the smallest so far' after
* the number, If it is the largest so far, write 'the largest so far' after the number.
*/
void Challenge::Drill_6(){
	double value, largest = 0, smallest = 1000;
	bool fin = true;
	while (fin == true) {
		cout << "Enter a value: " << endl << endl;
		cin >> value;
		if (!cin) {
			fin = false;
			cout << "Thanks for playing!";
			return;
		}
		else {
			cout << "the value entered:" << value << endl;
			if (value < smallest) {
				smallest = value;
				cout << "the smallest so far" << endl;
			}
			if (value > largest) {
				largest = value;
				cout << "the largest so far" << endl;
			}
		}
	}
}
struct Metric {
	double value;
	string unit;
};
Metric convertMetric(Metric source,Metric target) {
	Metric convertedMetric;
	if (target.unit == "") {
		return source;
	}
	else if (target.unit == "m" && source.unit == "cm") {
		convertedMetric.unit = "m";
		convertedMetric.value = source.value / 100;
		return convertedMetric;
	}
	else if (target.unit == "cm" && source.unit == "m") {
		convertedMetric.unit = "cm";
		convertedMetric.value = source.value * 100;
		return convertedMetric;
	}
	else if (target.unit == "in" && source.unit == "cm") {
		convertedMetric.unit = "in";
		convertedMetric.value = source.value * 2.54;
		return convertedMetric;
	}
	else if (target.unit == "cm" && source.unit == "in") {
		convertedMetric.unit = "cm";
		convertedMetric.value = source.value / 2.54;
		return convertedMetric;
	}
	else if (target.unit == "ft" && source.unit == "in") {
		convertedMetric.unit = "ft";
		convertedMetric.value = source.value / 12;
		return convertedMetric;
	}
	else if (target.unit == "in" && source.unit == "ft") {
		convertedMetric.unit = "in";
		convertedMetric.value = source.value * 12;
		return convertedMetric;
	}
	else {
		cout << "sorry unrecognised conversion" << endl;
	}
}
void Challenge::Drill_7() {
	Metric metric, smallest, largest;
	smallest.value = 100;
	bool fin = true;
	while (fin == true) {
		cout << "Enter a value with a unit cm, m, in, or ft: " << endl << endl;
		cin >> metric.value >> metric.unit;
		if (!cin) {
			fin = false;
			cout << "Thanks for playing!";
			return;
		}
		else {
			cout << "the value entered:" << metric.value << metric.unit << endl;
			if (convertMetric(metric, smallest).value  < smallest.value) {
				smallest = metric;
				cout << "the smallest so far:" <<smallest.value<<smallest.unit<< endl;
			}
			if (convertMetric(metric, largest).value > largest.value) {
				largest = metric;
				cout << "the largest so far:" <<largest.value<<largest.unit<< endl;
			}
		}
		

	}
}

// TODO create switch for drill choice
void Challenge::RunChallenges()
{

	cout << "Please choose a Drill 1 - 7" << endl;
	for (int drill; cin >> drill;) {
		switch (drill)
		{
		case 1:
			Drill_1();
			break;
		case 2:
			Drill_2n3();
			break;
		case 3:
			Drill_2n3();
			break;
		case 4:
			Drill_4n5();
			break;
		case 5:
			Drill_4n5();
			break;
		case 6:
			Drill_6();
			break;
		case 7:
			Drill_7();
			break;

		default:
			cout << "Sorry number not recognised!" << endl;
			break;
		}
	}
}


	
