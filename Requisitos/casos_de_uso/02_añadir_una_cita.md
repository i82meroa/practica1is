## Añadir cita

**ID**: 02
**Descripción**: Se introduce una cita de un paciente con los datos del
nmbre de paciente, DNI, y la fecha y hora en la que es concertada la cita.

**Actores principales**: Secretario(Administrador)
**Actores secundarios**: Doctora

**Precondiciones**:
* La cita que se quiere añadir no debe de estar añadida. La cita a añadir 
no debe coincidir en fecha y hora con cualquier otra cita regristrada o
estar cerca del horario de otra.
* Que la cita sea concertada dentro del horario laboral de la clínica.

**Flujo principal**:
1. El secretario desea añadir una cita.
1. El secretario abre el cuadro de diálogo de búsqueda en el menú principal
1. El secretario introduce el nombre, apellidos y DNI del cliente
1. El secretario introduce la fecha y hora de la cita
1. El sistema comprueba que no haya una cita a la hora solicitada
1. El sistema confirma la cita

**Postcondiciones**:

* Se muestra al usuario la cita y su confirmación

**Flujos alternativos**:

4.a. Si la cita solicitada coincide en horario con otra o cera de esta,
se vuelve a pedir la introduccion de otro horario diferente.

