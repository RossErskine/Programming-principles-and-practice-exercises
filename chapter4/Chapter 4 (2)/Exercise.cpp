#include "Exercise.h"

/* ======== Exercise 1 ========================================
* Try this page: 105 & 109
* Write a program that converts Yen, Euros, and pounds into Dollers.
* Rewrite to incorporate a switch statement
*/
void Exercise::exercise1()
{
	using namespace std;
	double value;
	char unit;
	cout << "Enter the value followed by the currency Y = yen, E = Euro, D = dollers: \n" << endl;
	cin >> value >> unit;
	currency.SetVal(value);
	currency.SetUnit(unit);

	switch (currency.GetUnit())
	{
	case 'Y':
		cout << "the conversion is: " << currency.GetVal() * currency.GetYen() << " in pounds" << endl;
		break;
	case 'E':
		cout << "the conversion is: " << currency.GetVal() * currency.GetEuro() << " in pounds " << endl;
		break;
	case 'D':
		cout << "the conversion is: " << currency.GetVal() * currency.GetUSDoller() << " in pounds " << endl;
		break;
	default:
		cout << "Sorry thats not a currency we can convert: " << endl;
		break;
	}
}
/*
* Character converter
* Page 111
*/
void Exercise::tryThisCharacterConverter()
{
	char character = 'A';
	while (character != 'z' + 1)
	{
		int integer = character;
		cout << character << '\t' << integer << '\n';
		++character;
	}
}

void Exercise::tryThisBleep()
{
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

/*=============Exercise 2 =====================================
* If we define a median of a sequence as "number so that exactly as many elements
* come before it in the sequence as come after it" fix program from 4.6.3 so it always 
* prints out the median
*/
void Exercise::exercise2()
{
	vector<double> temps;
	for(double temp; cin>>temp;){
		temps.push_back(temp);
	}
	// Compute mean temperature
	double sum = 0;
	for (int x : temps) {
		sum += x;
		cout<< "Average temperature:" <<sum/temps.size()<<'\n';
	}
	// Compute median temperature
	sort(temps.begin(), temps.end());
	cout<< "Median temperature:" << temps[temps.size()/2] << '\n';
}

	

void Exercise::exercise_6()
{
	string t_val1, t_val2, t_val3;

	cout << "write a sum:  " << endl;
	cin >> t_val1 >> t_val2 >> t_val3;
	word_calc.findFirstWord(t_val1);
	word_calc.findExp(t_val2);
	word_calc.findSeocndWord(t_val3);
	word_calc.GetSum();

}

void Exercise::exercise_10()
{
	string t_playerInput;
	cout << "enter: rock, paper or scissors " << endl;
	cin >> t_playerInput;
	/*rps.SetPlayerInput(t_playerInput);
	rps.computerGo();
	rps.winner(rps.GetPlayerGo(), rps.GetComputerGo());*/
}
//vector<int> prime_num = { 2 };
void Exercise::exercise_11()
{
	IVector.add_Ivec(2);
	for (int i = 3; i < 100; ++i)
	{
		
			//find_prime(i);
			if (find_prime(i))
			{
				IVector.add_Ivec(i);
			}
		
	}
	IVector.display_Ivec();
}
bool Exercise::find_prime(int n)
{
	for (int i = 0; i < IVector.Ivec_size(); ++i)
	{
		if (n % IVector.GetIvec(i) == 0) {
			return false;
		}

	}return true;
}

void Exercise::exercise_18()
{
	double t_a, t_b, t_c;
	cout << "Enter Quadratic Formula: A, B & C " << endl;
	cin >> t_a >> t_b >> t_c;
	qf.quad_Ans_plus(t_a, t_b, t_c);
	qf.quad_Ans_minus(t_a, t_b, t_c);
	cout << "+X = " << qf.GetPlusX() << endl;
	cout << "-X = " << qf.GetMinusX() << endl;
}

void Exercise::exercise_19()
{
	string t_name;
	int t_score;
	bool play = true;
	while (play == true)
	{
		cout << "please write name and score: " << endl;
		cin >> t_name >> t_score;
		ns.addName(t_name, t_score);
		if (t_name == "NoName")
		{
			play = false;
		}
	}
	ns.displayNames_n_scores();
}
void Exercise::runExercise()
{
	exercise2();
	//exercise_6();
	//rg.grainCount();
	//exercise_10();
	//exercise_11();
	//exercise_18();
	//exercise_19();
}