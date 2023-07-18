#include "Exercise.h"
#include "Challenge.h"

#include <iostream>

int main()
{
    int run;
    cout << "Please select 1 -> exercises, 2 -> challenges" << endl;
    cin >> run;
    switch(run){
        case 1:{
            Exercise exercises;
            exercises.runExercise();
            break;
        }
        case 2:{
            Challenge challenges;
            challenges.RunChallenges();
            break;
        }
        default:{
            cout << "Selction not recognised!";
            break;
        }

    }
    return 0;
    
}

