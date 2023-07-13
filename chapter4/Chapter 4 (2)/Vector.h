#pragma once
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Vector
{
private:
	vector<int> m_Ivec;
	vector<double> m_Dvec;
	vector<string> m_Svec;

public:
	Vector();
	~Vector();
	
	void add_Ivec(int Ivec);
	void  display_Ivec();
	const int& Ivec_size() const;
	const int& GetIvec(int i) const;

	void add_Svec(string Svec);
	void  display_Svec();

	void add_Dvec(double Dvec);
	void  display_Dvec();



};

