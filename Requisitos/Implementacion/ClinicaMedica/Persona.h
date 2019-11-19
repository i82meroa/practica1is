#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
using namespace std;

struct fecha{
	int dia;
	int mes;
	int año;
};

class Persona{
	private:
		string dni_;
		string nombre_;
		string apellidos_;
		string telefono_;
		fecha fechaNacimiento_;

	public:
		Persona(string dni, string nombre="", string apellidos="",
			    string telefono="", fecha fechaNacimiento){
			setDNI(dni);
			setNombre(nombre);
			setApellidos(apellidos);
			setTelefono(telefono);
			setFechaNacimiento(fechaNacimiento);
		}; //constructor
		inline void setDNI(string dni){dni_=dni;};
		inline string getDNI(){return dni_;};
		inline void setNombre(string nombre){nombre_=nombre;};
		inline string getNombre(){return nombre_;};
		inline void setApellidos(string apellidos){apellidos_=apellidos;};
		inline string getApellidos(){return apellidos_;};
		inline void setTelefono(string telefono){telefono_=telefono;};
		inline string getTelefono(){return telefono_;};
		bool setFechaNacimiento(int dia, int mes , int año); // true si la asignacion se ha realizado correctamente y false si no se ha hecho la asignacion.
		inline fecha getFechaNacimiento(){return fechaNacimiento_;};

		inline string getApellidosyNombre(){return apellidos_+", "+nombre_;};


};

#endif