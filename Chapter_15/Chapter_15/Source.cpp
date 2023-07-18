#include "Drills.h"
#include "Exercises.h"


int main()
{
	try
	{
		//runFunction_graph();
		//runClassDefinition();
		runExercises();
		return 0;
	}
	catch (const char* msg)
	{
		std::cerr << msg << std::endl;
		
	}
	catch (...)
	{
		std::cerr << "exception\n";
	}
}