#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <unistd.h>
#include "Paciente.h"
//#include "Persona.h"

using namespace std;

//funciones
int textoMenu1();
int textoMenu2();
void menu1();
void menu2();

int main(){
	menu1();


	return 0;
}


int textoMenu1(){
	int opcion;
	printf("Bienvenido a nuestra Clínica Médica\n1) Pacientes\n2) Secretarios\n3) Medicos\n4) Salir\nIntroduce el numero de la opcion que quieres consultar/añadir/modificar\n");
	scanf("%i",&opcion);
	return opcion;
}

void menu1(){
	bool continuar = true;

	do{
		system("clear");
		switch(textoMenu1()){
			case 1://opciones de paciente
				menu2();
				break;
			case 2://opciones de secretario

				break;
			case 3://opciones de medicos

				break;
			case 4://sale de la clínica
				continuar=false;
				break;
			default:
				printf("ERROR: No has introducido ningun numero de opción del menú\n");
				break;
		}
	}while(continuar);
	system("clear");
	printf("\n\nHasta pronto\n\n");
	sleep(2);
}


int textoMenu2(){
	system("clear");
	int opcion;
	printf("Opciones de Paciente\n1) Añadir Paciente\n2) Mostrar Paciente\n3) Mostrar Pacientes\n4) Modificar Paciente\n5) Borrar Paciente\n6) Atrás\nIntroduce el numero de la opcion\n");
	scanf("%i",&opcion);
	return opcion;
}


bool addPaciente(Paciente paciente, list <Paciente> pacientes){

	//recorremos la lista para ver si ha sido añadido anteriormente
	list <Paciente>::iterator i;
	for(i=pacientes.begin(); i != pacientes.end(); ++i){
		if(paciente.getDNI() == (*i).getDNI()){
			return false;
		}
	}
	pacientes.push_back(paciente);//lo añade al final

	string nombreFichero =paciente.getDNI()+".txt"; //creamos el nombre del fichero con el dni del paciente

	ofstream ficheropaciente(nombreFichero); //abre el fichero de salida

	ficheropaciente.close();
	return true;
}


void menu2(){
	bool continuar = true;

	do{
		system("clear");
		switch(textoMenu2()){
			case 1://opciones de paciente

				break;
			case 2://opciones de secretario

				break;
			case 3://opciones de medicos

				break;
			case 6://sale de la clínica
				continuar=false;
				break;
			default:
				printf("ERROR: No has introducido ningun numero de opción del menú\n");
				break;
		}
	}while(continuar);
	system("clear");
}