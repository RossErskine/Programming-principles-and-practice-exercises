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
	void SetVal(const double& val){
		value = val;
	}
	const double& GetVal(){
		return value;
	}
	//unit
	void SetUnit(const char& ut){
		unit = ut;
	}
	const char& GetUnit() const{
		return unit;
	}
	//Yen
	void SetYen(const double& yen){
		Yen = yen;
	}
	const double& GetYen() const{
		return Yen;
	}
	//Euro
	void SetEuro(const double& euro){
		Euro = euro;
	}
	const double& GetEuro() const{
		return Euro;
	}
	//USdoller
	void SetUSdoller(const double& usdoller){
		USdoller = usdoller;
	}
	const double& GetUSDoller() const{
		return USdoller;
	}

};

