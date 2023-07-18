#pragma once
#include  <string>

using namespace std;

class Name_value
{
private:
	string _name;
	int _value;
	
	//Name_value(string name, int value) : _name(name), _value(value){}

public:

	string getName(){
		return _name;
	}

	int getValue(){
		return _value;
	}

	void setName(string name){
		_name = name;
	}
	void setValue(int value){
		_value = value;
	}
};

