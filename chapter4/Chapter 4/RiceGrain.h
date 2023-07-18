#pragma once
#include <iostream>


using namespace std;

class RiceGrain
{
public:
	RiceGrain();
	~RiceGrain();

	void grainCount()
	{
		double i = 1;
		double sum = 1;
		int squares = 64;
		while (sum < 1000000000)
		{
				
				cout << i << '\t' << sum << endl;
				sum *= 2;
				i++;

			
		}
	}
};

