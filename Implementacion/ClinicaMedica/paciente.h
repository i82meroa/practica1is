#include <iostream>
#include <string.h>
#ifndef PACIENTE_H
#define PACIENTE_H
using namespace std;

class Paciente
{
	private:
		string DNI_;
		string nombre_;
		string apellidos_;
		string fechaNacimiento_;
		string direccion_;
		string tipoPaciente_;
		string telefono_;
	public:
		Paciente()
		{
			DNI_="";
			nombre_="";
			apellidos_="";
			fechaNacimiento_="";
			direccion_="";
			tipoPaciente_="";
			telefono_="";
		}

		inline string getDNI(){return DNI_;}
		inline string getNombre(){return nombre_;}
		inline string getApellidos(){return apellidos_;}
		inline string getFechaNacimiento(){return fechaNacimiento_;}
		inline string getDireccion(){return direccion_;}
		inline string getTipoPaciente(){return tipoPaciente_;}
		inline string getTelefono(){return telefono_;}
		inline void setDNI(string dni){DNI_=dni;}
		inline void setNombre(string nombre){nombre_=nombre;}
		inline void setApellidos(string apellidos){apellidos_=apellidos;}
		inline void setFechaNacimiento(string fechaNacimiento){fechaNacimiento_=fechaNacimiento;}
		inline void setDireccion(string direccion){direccion_=direccion;}
		inline void setTipoPaciente(string tipoPaciente){tipoPaciente_=tipoPaciente;}
		inline void setTelefono(string telefono){telefono_=telefono;}

		void imprimirDatos()
		{
			cout << "DATOS DEL PACIENTE" << endl;
			cout << "^^^^^^^^^^^^^^^^^^" << endl;
			cout << "DNI: " << this->getDNI() << endl;
			cout << "Nombre: " << this->getNombre() << endl;
			cout << "Apellidos: " << this->getApellidos() << endl;
			cout << "Fecha de nacimiento: " << this->getFechaNacimiento() << endl;
			cout << "Direccion: " << this->getDireccion() << endl;
			cout << "Tipo de paciente: " << this->getTipoPaciente() << endl;
			cout << "Telefono: " << this->getTelefono() << endl;
			cout << "^^^^^^^^^^^^^^^^^^" << endl;
		}

		void solicitarDatos()
		{
			string nombre, apellido, direccion, dni, fechaNac, tipoPaciente, telefono;

			cout << "DATOS DEL PACIENTE" << endl;
			cout << "^^^^^^^^^^^^^^^^^^" << endl;
			cout << "Introduzca el DNI: ";
			cin.ignore();
			getline(cin, dni);
			cout << "Introduzca el nombre: ";
			getline(cin, nombre);
			cout << "Introduzca los apellidos: ";
			getline(cin, apellido);
			cout << "Introduzca la fecha de nacimiento: ";
			getline(cin, fechaNac);
			cout << "Introduzca la direccion: ";
			getline(cin, direccion);
			cout << "Introduzca el tipo de paciente: ";
			getline(cin, tipoPaciente);
			cout << "Introduzca el telefono: ";
			getline(cin, telefono);
			this->setDNI(dni);
			this->setNombre(nombre);
			this->setApellidos(apellido);
			this->setFechaNacimiento(fechaNac);
			this->setDireccion(direccion);
			this->setTipoPaciente(tipoPaciente);
			this->setTelefono(telefono);
			cout << "^^^^^^^^^^^^^^^^^^" << endl;
		}
};

#endif