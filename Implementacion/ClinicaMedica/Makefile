all: compilar

main.o: Main.cc
	g++ -c Main.cc

paciente.o: paciente.cc
	g++ -c paciente.cc

tratamiento.o: tratamiento.cc
	g++ -c tratamiento.cc

cita.o: cita.cc
	g++ -c cita.cc

compilar: Main.o paciente.o cita.o tratamiento.o	
	g++ Main.o paciente.o tratamiento.o cita.o -o Main.exe