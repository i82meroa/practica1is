## Añadir paciente

**ID**: 01
**Descripción**: Se introduce el nombre y apellidos del
usuario,el DNI,dirección postal, fecha de nacimiento , teléfono, saber
si el cliente es de tipo privado o tiene un seguro.

**Actores principales**: Secretario(Administrador)
**Actores secundarios**: Doctora

**Precondiciones**:
* El paciente que queremos añadir no esté ya añadido

**Flujo principal**:
1. El secretario desea consultar los datos de un cliente
1. El secretario abre el cuadro de diálogo de búsqueda en el menú  principal
1. El secretario introduce el nombre y apellidos del cliente
1. El secretario intruduce el DNI del cliente
1. El secretario introduce la dirección postal del cliente
1. El secretario introduce la fecha de nacimiento del cliente
1. El secretario introduce el teléfono el cliente
1. El secretario introduce si el cliente es privado o tiene seguro
1. El sistema muestra por pantalla los datos del usuario

**Postcondiciones**:

* Se muestran al secretario los datos relativos al cliente

**Flujos alternativos**:

4.a. Si no existe el usuario, se muestra un mensaje de error

