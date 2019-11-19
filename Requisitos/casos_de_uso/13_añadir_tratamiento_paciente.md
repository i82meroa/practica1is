## Añadir el tratamiento del paciente

**ID**: 13
**Descripción**: Se añade un tratamiento a la enfermedad del paciente

**Actores principales**: Secretario(Administrador)
**Actores secundarios**: Doctora

**Precondiciones**:
* Que el paciente tenga historial médico.

**Flujo principal**:
1. El secretario desea añadir un tratamiento al cliente
1. El secretario abre el cuadro de diálogo de búsqueda para tratamiento médico del paciente
1. El secretario introduce el nombre y apellidos del cliente o el DNI
1. El sistema muestra un cuadro de diálogo para escribir el tratamiento
1. El sistema pregunta si se desea guardar el tratamiento
1. El secretario afirma el guardado
1. El sistema guarda el tratamiento

**Postcondiciones**:

* Se debe de mostrar por pantalla que el tratamiento a sido guardado con éxito

**Flujos alternativos**:

4.a. Si no se encuentra el paciente al cual hay que hacerle tratamiento, se vuelve
a preguntar por el nombre y apellidos del cliente.
4.a. Si el secretario no confirma el guardado, se vuelve a preguntar por los
datos del paciente para volver a buscar
