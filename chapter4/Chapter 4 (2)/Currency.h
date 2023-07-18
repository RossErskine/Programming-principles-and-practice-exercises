#pragma once
#include <string>

using namespace std;

class Currency
{
private:
	double value;
	char unit;
	double Yen = 0.007; //default
	double Euro = 0.84; 
	double USdoller = 0.76;
public:
	// ==== Declarations === //
	//value
	void SetVal(const double& val);
	const double& GetVal();
	//unit
	void SetUnit(const char& ut){}
	const char& GetUnit() const{}
	//Yen
	void SetYen(const double& yen){}
	const double& GetYen() const{}
	//Euro
	void SetEuro(const double& euro){}
	const double& GetEuro() const{}
	//USdoller
	void SetUSdoller(const double& usdoller){}
	const double& GetUSDoller() const{}
	
};

