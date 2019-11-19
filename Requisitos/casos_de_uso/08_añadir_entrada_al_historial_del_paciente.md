## Añadir entrada al historial del paciente
**ID**: 08
**Descripción**: Se creal una entrada para el historial médico
del paciente en el caso de no tenerlo.

**Actores principales**: Secretario(Administrador)
**Actores secundarios**: Doctora

**Precondiciones**:
* El paciente no debe de tener historial médico.

**Flujo principal**:
1. El secretario desea abrir un historial médico al paciente
1. El secretario abre el cuadro de diálogo de búsqueda en el menú principal
1. El secretario introduce el nombre, apellidos y DNI del cliente
1. El sistema comprueba que el paciente no tiene historial médico
1. El sistema introduce una entrada de historial
1. El secretario empieza a escribir el historial
1. EL sistema guarda el historial

**Postcondiciones**:

* Se muestra al usuario que el historial ha sido creado con éxito

**Flujos alternativos**:

4.a. Ninguno.

