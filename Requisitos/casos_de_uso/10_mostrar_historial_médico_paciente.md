## Mostrar historial médico del paciente

**ID**: 10
**Descripción**: Se muestra el historial médico del paciente 
que incluye el tratamiento y las enfermedades

**Actores principales**: Secretario(Administrador)
**Actores secundarios**: Doctora

**Precondiciones**:
* El paciente debe tener historial médico (ha de tener por lo menos
entrada de historial).

**Flujo principal**:
1. El secretario desea buscar el historial de un paciente
1. El secretario abre el cuadro de diálogo de búsqueda de historial médico del paciente
1. El secretario introduce el nombre y apellidos del cliente y por el DNI
1. El sistema muestra por pantalla el tratamiento y las enfermedades del paciente

**Postcondiciones**:

* Se debe de mostrar por pantalla el historial médico del paciente

**Flujos alternativos**:

4.a. Si el paciente no tiene historial médico, se notifica que dicho cliente
no tiene historial médico.

