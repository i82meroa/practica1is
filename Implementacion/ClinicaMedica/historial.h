#ifndef HISTORIAL_H
#define HISTORIAL_H

#include <iostream>
#include <string.h>
#include <list>
#include "paciente.h"

using namespace std;

struct CodigoTrat{
	int Codigo;
};


class Historial: public Paciente{
private:
	list <CodigoTrat> codigos_;
public:
	Historial(string DNI): 
		Persona(DNI){
			}; //constructor

	inline list <Apuesta> getCodigosTratamientos(){return codigos_; };
	void setCodigosTratamientos();
};

#endif
