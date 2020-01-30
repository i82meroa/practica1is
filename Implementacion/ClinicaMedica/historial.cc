#include <iostream>
#include <string>
#include <fstream>
#include "paciente.h"
#include "historial.h"


using namespace std;



void Historial::setCodigosTratamientos(){
	CodigoTrat a;
	string codigo;

	codigos_.clear();
	string nombreFichero=getDNI()+".txt";
	ifstream ficheroCodigos(nombreFichero);
while(getline( ficheroCodigos, codigo, '\n')){

	a.codigo=stoi(codigo);
	codigos_.push_back(a);
	}


}
