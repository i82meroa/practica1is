## Cancelar cita

**ID**: 04
**Descripción**: Se cancela una cita

**Actores principales**: Secretario(Administrador)
**Actores secundarios**: Doctora

**Precondiciones**:
*La cita que se quiere cancelar debe de estar añadida.

**Flujo principal**:
1. El secretario desea cancelar una cita.
1. El secretario abre el cuadro de diálogo de cancelación de cita en el menú principal
1. El secretario introduce el nombre, apellidos del cliente
1. El sistema muestra las citas solicitadas del paciente
1. El secretario introduce la cita a cancelar
1. El sistema cancela la cita
1. El sistema confirma la cancelación de la cita

**Postcondiciones**:

* Se muestra al usuario la confirmación de la cita
* Se debe de asegurar que la cita ha sido borrada

**Flujos alternativos**:

4.a. Si la cita a cancelar a introducir no existe, se vuelve a preguntar por la cita a introducir

