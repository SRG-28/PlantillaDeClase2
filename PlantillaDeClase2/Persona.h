#pragma once
#include<iostream>
#include<string>
using namespace std;

class Persona {
private:
	string nombre;
	int edad;
public:
	Persona();
	Persona(string, int);
	virtual ~Persona();
	bool operator >(Persona& p2);
	friend ostream& operator <<(ostream& out, const Persona&);
};
