## Mostrar tratamiento médico del paciente

**ID**: 06
**Descripción**: Se muestra el tratamiento médico del paciente

**Actores principales**: Secretario(Administrador)
**Actores secundarios**: Doctora

**Precondiciones**:
* El paciente tenga historial médico

**Flujo principal**:
1. El secretario desea buscar el historial de un paciente
1. El secretario abre el cuadro de diálogo de búsqueda de historial médico del paciente
1. El secretario introduce el nombre y apellidos del cliente o el DNI
1. El sistema muestra por pantalla el tratamiento y las enfermedades del paciente

**Postcondiciones**:

* Se debe de mostrar por pantalla el historial médico del paciente

**Flujos alternativos**:

4.a. Si el paciente no tiene historial médico, se notifica que dicho cliente
no tiene historial médico.
