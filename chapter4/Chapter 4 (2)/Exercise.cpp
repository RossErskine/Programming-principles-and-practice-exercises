#include "Exercise.h"


using namespace std;



Exercise::Exercise()
{
	
}


Exercise::~Exercise()
{
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
	//exercise_6();
	//rg.grainCount();
	//exercise_10();
	//exercise_11();
	//exercise_18();
	exercise_19();
}