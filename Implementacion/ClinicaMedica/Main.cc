#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "Paciente.h"

using namespace std;

//funciones
int textoMenu1();
int textoMenu2();
void menu1();
void menu2();
bool nuevoPaciente ();
bool mostrarPacientes ();

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


void menu2(){
	bool continuar = true;

	do{
		system("clear");
		switch(textoMenu2()){
			case 1://añadir paciente
				system("clear");
				nuevoPaciente ();
				break;
			case 2:
				mostrarPacientes();
				break;
			case 3:

				break;
			case 6:
				continuar=false;
				break;
			default:
				printf("ERROR: No has introducido ningun numero de opción del menú\n");
				break;
		}
	}while(continuar);
	system("clear");
}




//Hasta aqui es todo del menu, meter funciones de utilidad debajo



bool nuevoPaciente (){
	char dni[9], nombre[20], apellidos[50],telefono[12], alergenos[100];
	//string dni,nombre, apellidos,telefono,alergenos;
	int dia, mes, ano;
	printf("Introduce el DNI\n");
	scanf("%s",(char *)&dni);
	printf("Introduce el nombre\n");
	scanf("%s",(char *)&nombre);
	printf("Introduce el apellidos\n");
	scanf("%s",(char *)&apellidos);
	printf("Introduce el telefono\n");
	scanf("%s",(char *)&telefono);
	printf("La fecha de nacimiento\n");
	printf("dia\n");
	scanf("%d",&dia);
	printf("mes\n");
	scanf("%d",&mes);
	printf("ano\n");
	scanf("%d",&ano);
	printf("Introduce el alergenos\n");
	scanf("%s",(char *)&alergenos);

	

	


	FILE * fichero;
	fichero=fopen("pacientes.txt","a+");
	if(fichero==NULL){
		fichero=fopen("pacientes.txt","w");
	}

	fprintf(fichero,"%s,%s,%s,%s,%d/%d/%d,%s\n",dni,nombre,apellidos,telefono,dia,mes,ano,alergenos);
	fclose(fichero);

	return 0;
}

bool mostrarPacientes (){
	bool fechaCorrecta;
	char dni[9], nombre[20], apellidos[50],telefono[12], alergenos[100],continuar;
	int dia, mes, ano;

	FILE * fichero;
	fichero=fopen("pacientes.txt","r");
	if(fichero!=NULL){
		printf("DNI           NOMBRE        APELLIDOS         TELEFONO    FECHA NACIMIENTO  ALERGENOS\n");
	printf("_______________________________________________________________________________________");
		while(feof(fichero)){
			fscanf(fichero,"%s,%s,%s,%s,%d/%d/%d,%s\n",dni,nombre,apellidos,telefono,&dia,&mes,&ano,alergenos);
			Paciente pacienteNuevo(dni,nombre, apellidos,telefono,alergenos);
			fechaCorrecta=pacienteNuevo.setFechaNacimiento(dia,mes,ano);
		}
			fclose(fichero);
	}else{
		printf("No hay ningun paciente\n");
	}
	printf("Pulse cualquier tecla para continuar\n");
	scanf("%s",&continuar);

	return 0;
}