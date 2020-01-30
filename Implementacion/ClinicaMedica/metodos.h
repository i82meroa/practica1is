#include <vector>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include "paciente.h"
#include "cita.h"
#include "tratamiento.h"
#ifndef METODOS_H
#define METODOS_H

void mostrarPacientes(vector<Paciente>pacientes){
	vector<Paciente>::iterator it;
	for (it = pacientes.begin(); it != pacientes.end() ; ++it)
	{
		it->imprimirDatos();
	}
}

void addPaciente(vector <Paciente> &pacientes,Paciente p){
	pacientes.push_back(p);
}

void addCita(vector <Cita> &citas, Cita c){
	citas.push_back(c);
}

void addTratamiento(vector<Tratamiento>&tratamientos, Tratamiento t){
	tratamientos.push_back(t);
}

int buscarPaciente(vector<Paciente>pacientes, string nombre, string apellidos){
	
	for (int i = 0; i < pacientes.size(); i++)
	{
		if(pacientes[i].getNombre()==nombre and pacientes[i].getApellidos()==apellidos)
		{
			return i;
		}
	}

	return -1;
}

int buscarCita(vector<Cita>citas, string dni){
	for(int i=0; i<citas.size(); i++)
	{
		if(citas[i].getDni()==dni)
		{
			return i;
		}
	}
	return -1;
}

void mostrarHistorial(vector<Tratamiento>tratamientos, string dni){
	for (int i = 0; i < tratamientos.size(); ++i)
	{
		if (tratamientos[i].getPaciente()==dni)
		{
			tratamientos[i].imprimirDatos();
		}
	}
}

void pacientesVectorAFichero(vector<Paciente>&pacientes){
	ofstream fich("pacientes.txt");
	if(!fich)
	{
		cout << "ERROR no se pudo abrir fichero" << endl;
	}
	else
	{
		vector<Paciente>::iterator it;
		for (it = pacientes.begin(); it != pacientes.end() ; ++it)
		{
			fich << it->getDNI()+"\n";
			fich << it->getNombre()+"\n";
			fich << it->getApellidos()+"\n";
			fich << it->getFechaNacimiento()+"\n";
			fich << it->getDireccion()+"\n";
			fich << it->getTipoPaciente()+"\n";
			fich << it->getTelefono()+"\n";
		}
		fich.close();
	}
}

void citasVectorAFichero(vector<Cita>&citas){
	ofstream fich("citas.txt");
	if(!fich)
	{
		cout << "ERROR no se pudo abrir fichero" << endl;
	}
	else
	{
		vector<Cita>::iterator it;
		for (it = citas.begin(); it != citas.end() ; ++it)
		{
			fich << it->getDni()+"\n";
			fich << it->getFecha()+"\n";
			fich << it->getHora()+"\n";
		}
		fich.close();
	}
}

void tratamientosVectorAFichero(vector<Tratamiento>&tratamientos){
	ofstream fich("tratamientos.txt");
	if(!fich)
	{
		cout << "ERROR no se pudo abrir fichero" << endl;
	}
	else
	{
		vector<Tratamiento>::iterator it;
		for (it = tratamientos.begin(); it != tratamientos.end() ; ++it)
		{
			fich << it->getPaciente()+"\n";
			fich << it->getFecha()+"\n";
			fich << it->getTratamiento()+"\n";
			fich << it->getInicio()+"\n";
			fich << it->getFin()+"\n";
			fich << it->getRegularidad()+"\n";
		}
		fich.close();
	}
}

void pacientesFicheroAVector(vector<Paciente>&pacientes){
	ifstream f("pacientes.txt");
	Paciente p;
	string linealeida;
	while(getline(f, linealeida, '\n'))
	{
		p.setDNI(linealeida);
		getline(f, linealeida, '\n');
		p.setNombre(linealeida);
		getline(f, linealeida, '\n');
		p.setApellidos(linealeida);
		getline(f, linealeida, '\n');
		p.setFechaNacimiento(linealeida);
		getline(f, linealeida, '\n');
		p.setDireccion(linealeida);
		getline(f, linealeida, '\n');
		p.setTipoPaciente(linealeida);
		getline(f, linealeida, '\n');
		p.setTelefono(linealeida);
		pacientes.push_back(p);
	}
	f.close();
}

void citasFicheroAVector(vector<Cita>&citas){
	ifstream f("citas.txt"); //file * fich ifstream -> lectura
	Cita c;
	string linealeida;
	while(getline(f, linealeida, '\n'))
	{
		c.setDni(linealeida);
		getline(f, linealeida, '\n');
		c.setFecha(linealeida);
		getline(f, linealeida, '\n');
		c.setHora(linealeida);
		citas.push_back(c);
	}
	f.close();
}

void tratamientosFicheroAVector(vector<Tratamiento>&tratamientos){
	ifstream f("tratamientos.txt"); 
	Tratamiento t;
	string linealeida;
	while(getline(f, linealeida, '\n'))
	{
		t.setPaciente(linealeida);
		getline(f, linealeida, '\n');
		t.setFecha(linealeida);
		getline(f, linealeida, '\n');
		t.setTratamiento(linealeida);
		getline(f, linealeida, '\n');
		t.setInicio(linealeida);
		getline(f, linealeida, '\n');
		t.setFin(linealeida);
		getline(f, linealeida, '\n');
		t.setRegularidad(linealeida);
		tratamientos.push_back(t);
	}
	f.close();
}

int menu(){
	cout << "         MENU" << endl;
	cout << endl;
	cout << "1  - Añadir paciente" << endl;
	cout << "2  - Mostrar datos del paciente" << endl;
	cout << "3  - Modificar datos del paciente" << endl;
	cout << "4  - Borrar paciente" << endl;
	cout << "5  - Mostrar todos los pacientes" << endl;
	cout << "6  - Añadir cita" << endl;
	cout << "7  - Mostrar cita" << endl;
	cout << "8  - Modificar cita" << endl;
	cout << "9  - Eliminar cita" << endl;
	cout << "10 - Mostrar historial" << endl;
	cout << "11 - Añadir tratamiento" << endl;
	cout << "12 - Guardar nuevos datos en la base de datos" << endl;
	cout << "13 - Cargar base de datos" << endl;
	cout << "14 - SALIR" << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" <<endl;
	int opcion;
	cout << "Introduzca la opcion: ";
	cin >> opcion;
	return opcion;
}

#endif