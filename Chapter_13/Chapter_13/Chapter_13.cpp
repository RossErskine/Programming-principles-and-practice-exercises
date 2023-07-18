#include "Chapter_12.h"
#include "Drills.h"
//#include "Exercises.h"
#include "messing.h"



int main()
{
	std::cout.exceptions(std::ios::failbit | std::ios::badbit | std::ios::eofbit);
	try
	{
		//runMessing();
		//runDrills();
		//runExercises();
		//runExercise_12();
		runCircles();
		
		return 0;
	}
	catch (const char* msg)
	{
		std::cerr << msg << std::endl;

	}
	catch (const std::ios_base::failure& ex)
	{
		std::cerr << "Caught exception: " << ex.what()
			<< ", error code = " << ex.code() << std::endl;
	}
	catch (...)
	{
		std::cerr << "exception\n";
	}
}