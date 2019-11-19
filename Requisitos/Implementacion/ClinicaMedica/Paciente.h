#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;


class Paciente:public Persona{
	private:
		string alergenos_;

	public:
		paciente(string alergenos):
				Persona(string dni, string nombre="", string apellidos="",
			    string telefono="", fecha fechaNacimiento){
			setDNI(dni);
			setNombre(nombre);
			setApellidos(apellidos);
			setTelefono(telefono);
			setFechaNacimiento(fechaNacimiento);
			setAlergenos(alergenos);
		}; //constructor
		inline void setAlergenos(string alergenos){alergenos_=alergenos;};
		inline string getAlergenos(){return alergenos_;};
};

#endif