## Modificar paciente

**ID**: 05
**DescripciM-CM-3n**: Se modifica el nombre y apellidos del
usuario,DirecciM-CM-3n postal, fecha de nacimiento , telM-CM-)fono, y la
clase de cliente que es, privado o tiene un seguro.

**Actores principales**: Secretario(Administrador)
**Actores secundarios**: Doctora

**Precondiciones**:
* El paciente que queremos modificar está añadido

**Flujo principal**:
1. El secretario desea consultar los datos de un cliente
1. El secretario abre el cuadro de diM-CM-!logo de bM-CM-:squeda en el
menM-CM-:  principal
1. El secretario modifica el nombre y apellidos del cliente
1. El secretario modifica la direcciM-CM-3n postal del cliente
1. El secretario modifica la fecha de nacimiento del cliente
1. El secretario modifica el telM-CM-)fono el cliente
1. El secretario modifica si el cliente es privado o tiene seguro
1. El sistema muestra por pantalla los datos del usuario

**Postcondiciones**:

* Se muestran al secretario los datos relativos al cliente

**Flujos alternativos**:

4.a. Si no existe el usuario, se muestra un mensaje de error

