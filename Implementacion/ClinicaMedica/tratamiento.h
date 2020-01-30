#include <iostream>
#include <string.h>
#ifndef TRATAMIENTO_H
#define TRATAMIENTO_H
using namespace std;

class Tratamiento
{
	private:
		string paciente_;
		string fecha_;
		string tratamiento_;
		string inicio_;
		string fin_;
		string regularidad_;
	public:
		Tratamiento()
		{
			paciente_="";
			fecha_="";
			tratamiento_="";
			inicio_="";
			fin_="";
			regularidad_="";
		}

		inline string getPaciente(){return paciente_;}
		inline string getFecha(){return fecha_;}
		inline string getTratamiento(){return tratamiento_;}
		inline string getInicio(){return inicio_;}
		inline string getFin(){return fin_;}
		inline string getRegularidad(){return regularidad_;}
		inline void setPaciente(string dni){paciente_=dni;}
		inline void setFecha(string fecha){fecha_=fecha;}
		inline void setTratamiento(string tratamiento){tratamiento_=tratamiento;}
		inline void setInicio(string inicio){inicio_=inicio;}
		inline void setFin(string fin){fin_=fin;}
		inline void setRegularidad(string regularidad){regularidad_=regularidad;}

		void imprimirDatos()
		{
			cout << "DATOS DEL TRATAMIENTO" << endl;
			cout << "^^^^^^^^^^^^^^^^^^^^^" << endl;
			cout << "Paciente: " << this->getPaciente() << endl;
			cout << "Fecha: " << this->getFecha() << endl;
			cout << "Tratamiento: " << this->getTratamiento() << endl;
			cout << "Fecha de inicio: " << this->getInicio() << endl;
			cout << "Fecha de fin: " << this->getFin() << endl;
			cout << "Regularidad: " << this->getRegularidad() << endl;
			cout << "^^^^^^^^^^^^^^^^^^^^^" << endl;
		}

		void solicitarDatos()
		{
			string paciente, fecha, tratamiento, inicio, fin, reg;

			cout << "DATOS DEL PACIENTE" << endl;
			cout << "^^^^^^^^^^^^^^^^^^" << endl;
			cout << "Introduzca el DNI del paciente: ";
			getline(cin, paciente);
			cout << "Introduzca la fecha actual: ";
			getline(cin, fecha);
			cout << "Introduzca el tratamiento: ";
			getline(cin, tratamiento);
			cout << "Introduzca la fecha de inicio del tratamiento: ";
			getline(cin, inicio);
			cout << "Introduzca la fecha de fin del tratamiento: ";
			getline(cin, fin);
			cout << "Introduzca la regularidad con que deberá tomarlo el paciente: ";
			getline(cin, reg);
			this->setPaciente(paciente);
			this->setFecha(fecha);
			this->setTratamiento(tratamiento);
			this->setInicio(inicio);
			this->setFin(fin);
			this->setRegularidad(reg);
			cout << "^^^^^^^^^^^^^^^^^^^" << endl;
		}
};

#endif