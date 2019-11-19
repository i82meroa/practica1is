#include <iostream>
#include "Persona.h"
#define AÑOACTUAl 2019;


using namespace std;




bool Persona::setFechaNacimiento(int dia, int mes , int año){
	if(año>=1900 && año <= AÑOACTUAl){
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
		fechaNacimiento_.mes=1;
		fechaNacimiento_.año=año;

	}else{
		return false;// el mes se introdujo fuera de rango o el año
	}
}