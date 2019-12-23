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
bool nuevoPaciente();
bool mostrarPacientes();
bool mostrarPaciente();
bool borrarPaciente();
bool modificarPaciente();

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
				mostrarPaciente();
				break;
			case 3:
				mostrarPacientes();
				break;
			case 4:
				modificarPaciente();
				break;
			case 5:
				borrarPaciente();
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
	scanf("%s",dni);
	printf("Introduce el nombre\n");
	scanf("%s",nombre);
	printf("Introduce el apellidos\n");
	scanf("%s",apellidos);
	printf("Introduce el telefono\n");
	scanf("%s",telefono);
	printf("La fecha de nacimiento\n");
	printf("dia\n");
	scanf("%d",&dia);
	printf("mes\n");
	scanf("%d",&mes);
	printf("ano\n");
	scanf("%d",&ano);
	printf("Introduce el alergenos\n");
	scanf("%s",alergenos);

	

	


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
		printf("_______________________________________________________________________________________\n");
		while(feof(fichero)==0){
			fgets(dni,9,fichero);
			fgets(nombre,20,fichero);
			fgets(apellidos,50,fichero);
			fgets(telefono,12,fichero);
			fscanf(fichero,"%d",&dia);
			fscanf(fichero,"%d",&mes);
			fscanf(fichero,"%d",&ano);
			fgets(alergenos,100,fichero);
			Paciente pacienteNuevo(dni,nombre, apellidos,telefono,alergenos);
			fechaCorrecta=pacienteNuevo.setFechaNacimiento(dia,mes,ano);
			pacienteNuevo.imprimirPaciente();
		}
			fclose(fichero);
	}else{
		printf("No hay ningun paciente\n");
	}
	printf("Pulse cualquier tecla para continuar\n");
	scanf("%s",&continuar);

	return 0;
}


bool mostrarPaciente (){
	bool fechaCorrecta;
	char dni[9],dniBuscado[9], nombre[20], apellidos[50],telefono[12], alergenos[100],continuar;
	int dia, mes, ano;
	printf("Dame el dni buscado\n");
	scanf("%s",dniBuscado);
	FILE * fichero;
	fichero=fopen("pacientes.txt","r");
	if(fichero!=NULL){
	printf("DNI           NOMBRE        APELLIDOS         TELEFONO    FECHA NACIMIENTO  ALERGENOS\n");
	printf("_______________________________________________________________________________________\n");
		while(feof(fichero)==0){
			fgets(dni,9,fichero);
			fgets(nombre,20,fichero);
			fgets(apellidos,50,fichero);
			fgets(telefono,12,fichero);
			fscanf(fichero,"%d%d%d",&dia,&mes,&ano);
			fgets(alergenos,100,fichero);
			if(dniBuscado == dni){
				Paciente pacienteNuevo(dni,nombre, apellidos,telefono,alergenos);
				fechaCorrecta=pacienteNuevo.setFechaNacimiento(dia,mes,ano);
				pacienteNuevo.imprimirPaciente();
			}
		}
			fclose(fichero);
	}else{
		printf("No hay ningun paciente\n");
	}
	printf("Pulse cualquier tecla para continuar\n");
	scanf("%s",&continuar);

	return 0;
}


bool borrarPaciente (){
	bool fechaCorrecta;
	char dni[9],dniBuscado[9], nombre[20], apellidos[50],telefono[12], alergenos[100],continuar;
	int dia, mes, ano;
	printf("Dame el dni buscado\n");
	scanf("%s",dniBuscado);
	FILE * fichero,*fichero2;
	fichero=fopen("pacientes.txt","r");
	fichero2=fopen("temporal.txt","w");
	if(fichero!=NULL){
		while(feof(fichero)==0){
			fgets(dni,9,fichero);
			fgets(nombre,20,fichero);
			fgets(apellidos,50,fichero);
			fgets(telefono,12,fichero);
			fscanf(fichero,"%d%d%d",&dia,&mes,&ano);
			fgets(alergenos,100,fichero);
			if(dniBuscado != dni){
				fprintf(fichero2,"%s,%s,%s,%s,%d/%d/%d,%s\n",dni,nombre,apellidos,telefono,dia,mes,ano,alergenos);
			}else{
				printf("Borrado con exito\n");
			}
		}
			fclose(fichero);
			fclose(fichero2);
	}else{
		printf("No hay ningun paciente\n");
	}
	remove("pacientes.txt");
	rename("temporal.txt","pacientes.txt");
	printf("Pulse cualquier tecla para continuar\n");
	scanf("%s",&continuar);

	return 0;
}

bool modificarPaciente(){
	bool fechaCorrecta;
	char dni[9],dniBuscado[9], nombre[20], apellidos[50],telefono[12], alergenos[100],continuar;
	int dia, mes, ano;
	printf("Dame el dni buscado\n");
	scanf("%s",dniBuscado);
	FILE * fichero,*fichero2;
	fichero=fopen("pacientes.txt","r");
	fichero2=fopen("temporal.txt","w");
	if(fichero!=NULL){
		while(feof(fichero)==0){
			fgets(dni,9,fichero);
			fgets(nombre,20,fichero);
			fgets(apellidos,50,fichero);
			fgets(telefono,12,fichero);
			fscanf(fichero,"%d%d%d",&dia,&mes,&ano);
			fgets(alergenos,100,fichero);
			if(dniBuscado != dni){
				fprintf(fichero2,"%s,%s,%s,%s,%d/%d/%d,%s\n",dni,nombre,apellidos,telefono,dia,mes,ano,alergenos);
			}else{
				int opcion;
				printf("¿Que quieres modificar?\n1)nombre\n2)apellidos\n3)telefono\n4)alergenos\nIntroduce numero de la opcion\n");
				scanf("%d",&opcion);
				switch(opcion){
					case 1:
						printf("Introduce el DNI\n");
						scanf("%s",dni);
						break;
					case 2:
						printf("Introduce el nombre\n");
						scanf("%s",nombre);
						break;
					case 3:
						printf("Introduce el apellidos\n");
						scanf("%s",apellidos);
						break;
					case 4:
						printf("Introduce el telefono\n");
						scanf("%s",telefono);
						break;
					case 5:
						printf("La fecha de nacimiento\n");
						printf("dia\n");
						scanf("%d",&dia);
						printf("mes\n");
						scanf("%d",&mes);
						printf("ano\n");
						scanf("%d",&ano);
						break;
					case 6:
						printf("Introduce el alergenos\n");
						scanf("%s",alergenos);
						break;
					default:
					 printf("No es el numero de ninguna opción\n");
				}
			}
		}
			fclose(fichero);
			fclose(fichero2);
	}else{
		printf("No hay ningun paciente\n");
	}
	remove("pacientes.txt");
	rename("temporal.txt","pacientes.txt");
	printf("Pulse cualquier tecla para continuar\n");
	scanf("%s",&continuar);

	return 0;
}