#include <iostream>
#include <string>
#ifndef CITA_H
#define CITA_H

using namespace std;

class Cita
{
	private:
		string dni_;
		string fecha_;
		string hora_;

	public:
		Cita()
		{
			dni_= "";
			fecha_= "";
			hora_= "";
		}
		inline string getDni(){return dni_;}
		inline string getFecha(){return fecha_;}
		inline string getHora(){return hora_;}
		inline void setDni(string dni){dni_= dni;}
		inline void setFecha(string fecha){fecha_= fecha;}
		inline void setHora(string hora){hora_= hora;}

		void solicitarDatos()
		{
			string dni, hora, fecha;

			cout<<"DATOS DE LA CITA"<<endl;
			cout<<"^^^^^^^^^^^^^^^^"<<endl;
			cout<<"Introduzca el DNI del paciente: ";
			cin>> dni;
			cout<<"Introduzca la fecha de la cita: ";
			cin>> fecha;
			cout<<"Introduzca la hora de la cita: ";
			cin>> hora;
			this-> setDni(dni);
			this-> setFecha(fecha);
			this-> setHora(hora);
			cout<<"^^^^^^^^^^^^^^^^^"<<endl;
		}

		void imprimirDatos()
		{
			cout<<"DATOS DE LA CITA"<<endl;
			cout<<"^^^^^^^^^^^^^^^^"<<endl;
			cout<<"DNI: "<<this-> getDni()<<endl;
			cout<<"Fecha: "<<this-> getFecha()<<endl;
			cout<<"Hora: "<<this-> getHora()<<endl;
			cout<<"^^^^^^^^^^^^^^^^"<<endl;
		}

};

#endif

