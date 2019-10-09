## Mostrar tratamiento de un paciente

**ID**: 07
**Descripción**: Se muestra el tratamiento del cliente una vez estes mirando el historial medico

**Actores principales**: Secretario(Administrador)
**Actores secundarios**: Doctora

**Precondiciones**:
* Se debe visualizar el historial medico

**Flujo principal**:
1. El secretario desea consultar el tratamiento para ello antes mira el historial medico
1. El secretario abre el cuadro de diálogo de búsqueda en la menú principal
1. Busca usuario y mira el historial médico
1. El sistema muestra el tratamiento

**Postcondiciones**:

* Se muestran al secretario los tratamientos con sus especificaciones

**Flujos alternativos**:

4.a. Si no existe el paciente y por tanto no existe el historial medico, informa al secretario con un mensaje de error
