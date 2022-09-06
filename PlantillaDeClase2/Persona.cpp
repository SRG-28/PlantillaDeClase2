#include"Persona.h"

Persona::Persona() {
	nombre = "";
	edad = 0;
}

Persona::Persona(string nom, int ed) {
	nombre = nom;
	edad = ed;
}

Persona::~Persona() {
}

bool Persona::operator >(Persona& p2) {
	if (this->edad > p2.edad)
		return true;
	else
		return false;
}

ostream& operator <<(ostream& out, const Persona& p2) {
	out << "\nNombre: " << p2.nombre << "\nEdad es: " << p2.edad << endl;
	return out;
}
