## Modificar cita

**ID**: 03
**Descripción**: Se modifica una cita cambiando el dia y la hora.

**Actores principales**: Secretario(Administrador)
**Actores secundarios**: Doctora

**Precondiciones**:
*La cita que se quiere modificar debe de estar añadida. La nueva fecha de la cita
(fecha y hora)no debe coincidir en fecha y hora con cualquier otra cita  regristrada o estar cerca del horario de otra.
*Que la modificación de la cita sea concertada dentro del horario laboral de la clínica.

**Flujo principal**:
1. El secretario desea modifcar una cita.
1. El secretario abre el cuadro de diálogo de modificación de cita en el menú principal
1. El secretario introduce el nombre, apellidos del cliente
1. El secretario mira las citas solicitadas del paciente
1. El secretario introduce la fecha solicitada a modificar
1. El sistema se encarga de garantizar que dicha fecha (día y hora) no esten solicitados previemente.
1. El sistema confirma la modificación de la cita

**Postcondiciones**:

* Se muestra al usuario la modificación de la cita y su confirmación

**Flujos alternativos**:

4.a. Si la modificación de cita solicitada coincide en horario con otra o cera de esta,
se vuelve a pedir la introduccion de otro horario diferente.

