#include"Persona.h"
using namespace std;

//Esta es la plantilla de clase (Pareja)
template<class T>
class Pareja {
private:
	T primero;
	T segundo;
public:
	//Pareja();
	Pareja(T, T);
	virtual ~Pareja();
	T obtenerMayor();
	void fijarElemento(T ele, int lug);
	void imprimePareja();

};

//Definicion de metodos

template<class T>
Pareja<T>::Pareja(T pri, T seg) {
	primero = pri;
	segundo = seg;
}

template<class T>
Pareja<T>::~Pareja() {
}

template<class T>
T Pareja<T>::obtenerMayor() { //Se debe crear la sobrecarga del mayor
	if (primero > segundo)
		return primero;
	else
		return segundo;
}

template<class T>
void Pareja<T>::fijarElemento(T ele, int lug) { // lug =  1 o 2
	if (lug == 1)
		primero = ele;
	else
		segundo = ele;

}

template<class T>
void Pareja<T>::imprimePareja() {
	cout << "El primero es :  " << primero << endl;
	cout << "El segundo es :  " << segundo << endl;

}

int main() {
	//Variables de entorno

	cout << "-------TRABAJANDO  CON OBJETOS PERSONA----------" << endl;
	cout << "------------------------------------------------" << endl;
	cout << "------------Creando Personas--------------------" << endl;
	Persona per1("Juan", 40);
	Persona per2("Cristina", 35);
	cout << "---------Creando un contenedor de personas------" << endl;
	Pareja<Persona>P1(per1, per2);
	cout << "---------Imprimir el contenedor P1--------------" << endl;
	P1.imprimePareja();
	cout << "Se desea saber cual de los dos es el mayor..." << endl; 
	cout << "El mayor es: " << endl;
	cout <<P1.obtenerMayor() << endl; //El << debe de ser const en el .cpp (revisar) para que no de error
	cout << endl;

	system("pause");
	return 0;
}