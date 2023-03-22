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
/*
void Challenge::Exercise_1()
{
	double t_val;
	char t_unit;
	cout << "Enter the value followed by the currency Y = yen, E = Euro, D = dollers: " << endl << endl;
	cin >> t_val >> t_unit;
	m_Currency.SetVal(t_val);
	m_Currency.SetUnit(t_unit);

	switch (m_Currency.GetUnit())
	{
	case 'Y':
		cout << "the conversion is: " << m_Currency.GetVal() * m_Currency.GetYen() << " in pounds" << endl;
		break;
	case 'E':
		cout << "the conversion is: " << m_Currency.GetVal() * m_Currency.GetEuro() << " in pounds " << endl;
		break;
	case 'D':
		cout << "the conversion is: " << m_Currency.GetVal() * m_Currency.GetUSDoller() << " in pounds " << endl;
		break;
	default:
		cout << "Sorry thats not a currency we can convert: " << endl;
		break;
	}
}*/
void Challenge::TryThis()
{
	char character = 'A';
	while (character != 'z' + 1)
	{
		int integer = character;
		cout << character << '\t' << integer << '\n';
		++character;
	}
}

void Challenge::bleep(){
	vector<string> sentence;
	string badWord = "shit";
	string replacementWord = "****";
	cout << "input a sentence: " << endl;
	for (string word; cin >> word;) {
		
		if (word == badWord){
			sentence.push_back(replacementWord);
		}
		else{
			sentence.push_back(word);
		}	
	}
	for (string word : sentence) {
		cout << word << " ";
	}
}



// TODO create switch for drill choice
void Challenge::RunChallenges()
{
	//Drill_1();
	//Drill_2n3();
	//Drill_4n5();
	Drill_6();
	//Exercise_1();
	//TryThis();
	//bleep();
}