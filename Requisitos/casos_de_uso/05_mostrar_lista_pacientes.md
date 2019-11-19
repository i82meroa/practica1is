## Mostrar lista de pacientes

**ID**: 05
**Descripción**: Se muestra una lista para que el secretario pueda ver a todos los pacientes

**Actores principales**: Secretario(Administrador)
**Actores secundarios**: Doctora

**Precondiciones**:
* Existan paciente registrados

**Flujo principal**:
1. El secretario desea consultar la lista de los clientes
1. El secretario abre el cuadro de diálogo de búsqueda en la menú principal
1. El sistema muestra por pantalla la lista de pacientes

**Postcondiciones**:

* Se muestran al secretario los datos relativos de los clientes en una lista

**Flujos alternativos**:

4.a. Si no existen 1 o mas clientes, se muestra un mensaje de error
