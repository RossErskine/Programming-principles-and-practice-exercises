#include "SimpleCalc.h"
#include "exercises.h"
#include "Messing.h"


int main()
{
    try
    {
		int run =0;
		cout << "Enter 1 to run calculator, 2 to run Exercises, and 3 to messing programs" << endl;
		cin >> run;

		switch (run){
			case 1:
				runCalc();
				break;
			case 2:
				runExercises();
				break;
			case 3:
				messingPlay();
				break;
			default:
				throw "Number not recognized";
				
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

