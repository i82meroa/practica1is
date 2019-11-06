## Cancelar el tratamiento del paciente

**ID**: 14
**Descripción**: Se elimina un tratamiento a la enfermedad del paciente

**Actores principales**: Secretario(Administrador)
**Actores secundarios**: Doctora

**Precondiciones**:
* Que el paciente tenga historial médico y que el tratamiento a cancelar exista

**Flujo principal**:
1. El secretario desea eliminar un tratamiento al cliente
1. El secretario abre el cuadro de diálogo de búsqueda para tratamiento médico del paciente
1. El secretario introduce el nombre y apellidos del cliente o el DNI y el identificador del tratamiento
1. El sistema pregunta si se desea eliminar el tratamiento
1. El secretario afirma el borrado
1. El sistema borra el tratamiento

**Postcondiciones**:

* Se debe de mostrar por pantalla que el tratamiento ha sido cancelado y borrado con éxito

**Flujos alternativos**:

4.a. Si no se encuentra el paciente al cual hay que borrar el tratamiento, se vuelve
a preguntar por el nombre y apellidos del cliente y el identificador del tratamiento.
4.a. Si el secretario no confirma el borrado, se vuelve a preguntar por los
datos del paciente y el tratamiento para volver a buscar
