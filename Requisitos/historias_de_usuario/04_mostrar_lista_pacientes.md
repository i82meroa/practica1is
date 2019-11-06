## Mostrar lista de pacientes

**ID**: 07
**Descripción**: Se muestra todos los pacientes en una lista

**Actores principales**: Secretario(Administrador)
**Actores secundarios**: Doctora

**Precondiciones**:
* Se deben haber realizado ya citas previamente.

**Flujo principal**:
1. El secretario desea consultar los datos de los pacientes
1. El secretario da a la opcion para ver los pacientes y el sistema muestra por pantalla toda la lista

**Postcondiciones**:

* Se muestran las opciones de ver historial medico o modificacion de cada paciente

**Flujos alternativos**:

4.a. Si no existen el paciente, se muestra un mensaje de error
