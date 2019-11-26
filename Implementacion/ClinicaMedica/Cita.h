#ifndef CITA_H
#define CITA_H

#include <iostream>
#include <string>
using namespace std;

struct fecha{
	int dia;
	int mes;
	int ano;
};

class Cita{
	private:
		string nombre_;
		string apellidos_;
	public:
		Cita(string dni, string nombre="", string apellidos="",
			    string telefono=""){
			setDNI(dni);
			setNombre(nombre);
			setApellidos(apellidos);
			setTelefono(telefono);
			
		}; //constructor
		inline void setDNI(string dni){dni_=dni;};
		inline string getDNI(){return dni_;};
		inline void setNombre(string nombre){nombre_=nombre;};
		inline string getNombre(){return nombre_;};
		inline void setApellidos(string apellidos){apellidos_=apellidos;};
		inline string getApellidos(){return apellidos_;};
		inline string getApellidosyNombre(){return apellidos_+", "+nombre_;};


};

#endif
