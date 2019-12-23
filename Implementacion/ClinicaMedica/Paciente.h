#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
#include <string.h>
using namespace std;

struct fecha{
	int dia;
	int mes;
	int ano;
};

class Paciente{
	private:
		string dni_;
		string nombre_;
		string apellidos_;
		string telefono_;
		fecha fechaNacimiento_;
		string alergenos_;

	public:
		Paciente(string dni="", string nombre="", string apellidos="", string telefono="", string alergenos=""){
			setDNI(dni);
			setNombre(nombre);
			setApellidos(apellidos);
			setTelefono(telefono);
			setAlergenos(alergenos);
		}; //constructor
		inline void setDNI(string dni){dni_=dni;};
		inline string getDNI(){return dni_;};
		inline void setNombre(string nombre){nombre_=nombre;};
		inline string getNombre(){return nombre_;};
		inline void setApellidos(string apellidos){apellidos_=apellidos;};
		inline string getApellidos(){return apellidos_;};
		inline void setTelefono(string telefono){telefono_=telefono;};
		inline string getTelefono(){return telefono_;};
		bool setFechaNacimiento(int dia, int mes , int ano); // true si la asignacion se ha realizado correctamente y false si no se ha hecho la asignacion.
		inline fecha getFechaNacimiento(){return fechaNacimiento_;};
		inline string getApellidosyNombre(){return apellidos_+", "+nombre_;};
		inline void setAlergenos(string alergenos){alergenos_=alergenos;};
		inline string getAlergenos(){return alergenos_;};
		void imprimirPaciente();
};

#endif
