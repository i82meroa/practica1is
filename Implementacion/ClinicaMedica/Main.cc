#include "paciente.h"
#include "cita.h"
#include "tratamiento.h"
#include "metodos.h"
#include <vector>
#include <string.h>
#include <iostream>

int main()
{
	vector<Paciente>listaPacientes;
	vector<Cita>VectorCintas;
	vector<Tratamiento>VectorTratamientos;

	pacientesFicheroAVector(listaPacientes);
	citasFicheroAVector(VectorCintas);
	tratamientosFicheroAVector(VectorTratamientos);

	string nombre, apellidos, dni,continuar="SI"; 
	int opcion, respuesta, posicion;
	Paciente p;
	Cita c;
	Tratamiento t;
	//comienzo del menú
	do{
		while(continuar != "SI"){
			printf("Introduce SI para continuar\n");
			cin >> continuar;
		}
		continuar="NO";
		system("clear");
		opcion = menu();

		switch(opcion)
		{	
			case 14:
				cout << "¿Desea guardar los cambios?" << endl;
				cout << "1: Sí / 0: No" << endl;
				cin >> respuesta;
				if (respuesta == 1)
				{
					pacientesVectorAFichero(listaPacientes);
					citasVectorAFichero(VectorCintas);
					tratamientosVectorAFichero(VectorTratamientos);
				}
				exit(-1);
				break;

			case 13:
				pacientesFicheroAVector(listaPacientes);
				citasFicheroAVector(VectorCintas);
				tratamientosFicheroAVector(VectorTratamientos);
				break;


			case 12:
				pacientesVectorAFichero(listaPacientes);
				citasVectorAFichero(VectorCintas);
				tratamientosVectorAFichero(VectorTratamientos);
				break;

			case 11:
				cout << "Introduzca el DNI del paciente al que le desea añadir un tratamiento" << endl;
				getline(cin, dni);
				t.solicitarDatos();
				addTratamiento(VectorTratamientos, t);
				break;

			case 10:
				cout << "Introduzca el DNI del paciente" << endl,
				cin.ignore();
				getline(cin, dni);
				mostrarHistorial(VectorTratamientos, dni);

				break;

			case 9:
				cout<<"Introduzca el DNI del paciente que quiera eliminar la cita."<<endl;
				getline(cin, dni);
				posicion= buscarCita(VectorCintas, dni);
				if (posicion != -1)
				{
					cout << "¿Desea eliminar la cita" << endl;
					cout << "1: Si / 0: No" << endl;
					cin >> respuesta;
					if (respuesta == 1)
					{
						VectorCintas.erase(VectorCintas.begin()+ posicion);
						cout << "La cita ha sido eliminada correctamente" << endl;
					}
					else
						cout << "La cita no ha sido eliminada" << endl;
				}
				else
					cout << "El paciente no se encuentra en el sistema" << endl;
				break;

			case 8:
				cout<<"Introduzca el DNI del paciente que quiere modificar la cita."<<endl;
				cin.ignore();
				getline(cin, dni);
				posicion= buscarCita(VectorCintas, dni);
				if (posicion != -1)
				{
					VectorCintas[posicion].imprimirDatos();
					VectorCintas.erase(VectorCintas.begin()+ posicion);
					cout<<"Introduzca los nuevos datos: "<<endl;
					c.solicitarDatos();
					addCita(VectorCintas, c);
				}
				else
					cout << "El paciente no tiene ninguna cita" << endl;
				break;

			case 7:
				cout<<"Introduzca el dni del paciente: "<<endl;
				cin.ignore();
				getline(cin, dni);
				posicion= buscarCita(VectorCintas, dni);

				if(posicion!=-1)
				{
					VectorCintas[posicion].imprimirDatos();
				}
				else
					cout<<"El paciente introducido no tiene ninguna cita."<<endl;
				break;

			case 6:
				c.solicitarDatos();
				addCita(VectorCintas, c);
				break;

			case 5:
				mostrarPacientes(listaPacientes);
				break;

			case 4:
				cout << "Introduzca el nombre del paciente que quiere eliminar" << endl;
				cin.ignore();
				getline(cin, nombre);
				cout << "Introduzca los apellidos del paciente que quiere eliminar" << endl;
				getline(cin, apellidos);
				posicion = buscarPaciente(listaPacientes, nombre, apellidos);
				if (posicion != -1)
				{
					cout << "¿Desea eliminar al paciente?" << endl;
					cout << "1: Sí / 0: No" << endl;
					cin >> respuesta;
					if (respuesta == 1)
					{
						listaPacientes.erase(listaPacientes.begin()+posicion);
						cout << "El paciente ha sido eliminado correctamente" << endl;
					}
					else
						cout << "El paciente no ha sido eliminado de nuestra base de datos" << endl;
				}
				else
					cout << "El paciente no se encuentra en nuestra base de datos" << endl;
				break;

			case 3:
				cout << "Introduzca el nombre del paciente que quiere modificar" << endl;
				cin.ignore();
				getline(cin, nombre);
				cout << "Introduzca los apellidos del paciente que quiere modificar" << endl;
				getline(cin, apellidos);
				posicion = buscarPaciente(listaPacientes, nombre, apellidos);
				listaPacientes[posicion].imprimirDatos();
				if (posicion != -1)
				{
					listaPacientes.erase(listaPacientes.begin()+posicion);
					cout << "Introduzca los nuevos datos" << endl;
					p.solicitarDatos();
					addPaciente(listaPacientes,p);
				}
				else
					cout << "El paciente no está en el sistema" << endl;
				break;

			case 2:
				cout << "Introduzca el nombre del paciente" << endl;
				cin.ignore();
				getline(cin, nombre);
				cout << "Introduzca los apellidos del paciente" << endl;
				getline(cin, apellidos);
				posicion = buscarPaciente(listaPacientes, nombre, apellidos);
				if(posicion != -1)
					listaPacientes[posicion].imprimirDatos();
				else
					cout << "El paciente introducido no se encuentra en nuestra base de datos" << endl;
				break;

			case 1:
				p.solicitarDatos();
				if (buscarPaciente(listaPacientes, p.getNombre(), p.getApellidos())==-1)
				{
					addPaciente(listaPacientes,p);
				}
				else
				{
					cout << "Ya existe dicho paciente en nuestra base de datos" << endl;
				}
			break;

			default:
				cout << "El dato introducido no es ninguna opcion" << endl;
		}

	} while(opcion!=0);
}



