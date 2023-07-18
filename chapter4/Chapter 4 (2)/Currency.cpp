#include "Currency.h"

//value
	void Currency::SetVal(const double& val){
		value = val;
	}
	const double& Currency::GetVal() const{
		return value;
	}
	//unit
	void Currency::SetUnit(const char& ut){
		unit = ut;
	}
	const char& Currency::GetUnit() const{
		return unit;
	}
	//Yen
	void Currency::SetYen(const double& yen){
		Yen = yen;
	}
	const double& Currency::GetYen() const{
		return Yen;
	}
	//Euro
	void Currency::SetEuro(const double& euro){
		Euro = euro;
	}
	const double& Currency::GetEuro() const{
		return Euro;
	}
	//USdoller
	void Currency::SetUSdoller(const double& usdoller){
		USdoller = usdoller;
	}
	const double& Currency::GetUSDoller() const{
		return USdoller;
	}
