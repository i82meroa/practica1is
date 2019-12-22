#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
#include <string>
#include "Paciente.h"
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
		//int num_historiales_;

	public:
		Paciente(/*int num_historiales=0,*/ string dni="", string nombre="", string apellidos="", string telefono="", string alergenos=""){
			setDNI(dni);
			setNombre(nombre);
			setApellidos(apellidos);
			setTelefono(telefono);
			setFechaNacimiento(1,1,2000);
			setAlergenos(alergenos);
			//setNumHistoriales(num_historiales);
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
		//inline void setNumHistoriales(int num_historiales){num_historiales_=num_historiales;};
		//inline int getNumHistoriales(){return num_historiales_;};
		inline void setAlergenos(string alergenos){alergenos_=alergenos;};
		inline string getAlergenos(){return alergenos_;};
};

#endif
