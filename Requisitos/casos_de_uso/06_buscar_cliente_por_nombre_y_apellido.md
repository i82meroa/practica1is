## Buscar cliente por nombre y apellido o por DNI

**ID**: 06
**DescripciM-CM-3n**: Se muestra un usuario en concreto para poder observar distintos campos suyos
**Actores principales**: Secretario(Administrador)
**Actores secundarios**: Doctora

**Precondiciones**:
* Existan paciente registrados
* El secretario se encuentra visualizando la lista de los clientes

**Flujo principal**:
1. El secretario abre el cuadro de diM-CM-!logo de bM-CM-:squeda en el menM-CM-:  principal
1. El sistema muestra por pantalla el pacientes

**Postcondiciones**:

* Se muestran al secretario los datos relativos del cliente
* Tendrá la opción a modificar datos del cliente y de visualizar el historial medico con su tratamiento

**Flujos alternativos**:

4.a. Si no existe el cliente se visualiza mensaje informativo que advierte de no poder hacer dicha acción
