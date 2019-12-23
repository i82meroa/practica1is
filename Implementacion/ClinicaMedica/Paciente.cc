#include <iostream>
#include "Paciente.h"

using namespace std;


bool Paciente::setFechaNacimiento(int dia, int mes , int ano){
	int const ANIO_ACTUAL=2019;
	if(ano>=1900 && ano <= ANIO_ACTUAL){
		switch(mes){
			case 1:
				if(dia <1 || dia > 31)
				return false;
			case 2:
				if(dia <1 || dia > 29)
				return false;
			case 3:
				if(dia <1 || dia > 31)
				return false;
			case 4:
				if(dia <1 || dia > 30)
				return false;
			case 5:
				if(dia <1 || dia > 31)
				return false;
			case 6:
				if(dia <1 || dia > 30)
				return false;
			case 7:
				if(dia <1 || dia > 31)
				return false;
			case 8:
				if(dia <1 || dia > 31)
				return false;
			case 9:
				if(dia <1 || dia > 30)
				return false;
			case 10:
				if(dia <1 || dia > 31)
				return false;
			case 11:
				if(dia <1 || dia > 30)
				return false;
			case 12:
				if(dia <1 || dia > 31)
				return false;
			default:
				return false;
		}
		fechaNacimiento_.dia=dia;
		fechaNacimiento_.mes=mes;
		fechaNacimiento_.ano=ano;

		return true;

	}
	return false;// el mes se introdujo fuera de rango o el ano
}


void Paciente::imprimirPaciente(){
	printf("%s,%s,%s,%s,%d/%d/%d,%s\n",dni_.c_str(),nombre_.c_str(),apellidos_.c_str(),telefono_.c_str(),fechaNacimiento_.dia,fechaNacimiento_.mes,fechaNacimiento_.ano,alergenos_.c_str());
}
