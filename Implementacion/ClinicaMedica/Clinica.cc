#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <list>

using namespaces std;

void Paciente::leePaciente(){

    string dni,nombre,apellidos,telefono,fechaNacimiento, alergenos;
		pacientes_.clear();
		string nombreFichero ="pacientes.txt";

		ifstream ficheroApuestas(nombreFichero);

	while (getline(ficheroApuestas,dni, ',')){
		getline(ficheroApuestas,nombre, ',');
		getline(ficheroApuestas,telefono, ',');
		getline(ficheroApuestas,fechaNacimiento, ',');
		getline(ficheroApuestas,direccion, ',');
		getline(ficheroApuestas,pais, ',');
		getline(ficheroApuestas,dinero, '\n');
		Paciente a(dni,codigo,nombre,apellidos,stoi(edad),
				direccion,localidad,provincia,
				pais);
		pacientes_.push_back(a);
	}
	ficheroApuestas.close();
}