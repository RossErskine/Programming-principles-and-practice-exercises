#include "Vector.h"

Vector::Vector() 
{

}
Vector::~Vector()
{

}

//=========Int============//
void Vector::add_Ivec(int Ivec)
{
	m_Ivec.push_back(Ivec);
}

const int& Vector::Ivec_size() const
{
	return m_Ivec.size();
}

const int& Vector::GetIvec(int i) const
{
	return m_Ivec[i];
}

void Vector::display_Ivec()
{
	sort(m_Ivec.begin(), m_Ivec.end());
	for (int i = 0; i < m_Ivec.size(); i++)
	{
		cout << m_Ivec[i] << '\t';
	}
	cout << endl;
}

//=========Double============//
void Vector::add_Dvec(double Dvec)
{
	m_Dvec.push_back(Dvec);
}

void Vector::display_Dvec()
{
	sort(m_Dvec.begin(), m_Dvec.end());
	for (int i = 0; i < m_Dvec.size(); i++)
	{
		cout << " Container value are: " << m_Dvec[i] << endl;
	}
	cout << endl;
}
//=============string==========//
void Vector::add_Svec(string Svec)
{
	m_Svec.push_back(Svec);
}
void Vector::display_Svec()
{
	sort(m_Svec.begin(), m_Svec.end());
	for (int i = 0; i < m_Svec.size(); i++)
	{
		cout << " Container value are: " << m_Svec[i] << endl;
	}
	cout << endl;
}
