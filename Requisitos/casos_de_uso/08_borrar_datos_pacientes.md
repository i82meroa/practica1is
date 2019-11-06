## Borrar datos de los pacientes

**ID**: 08
**Descripción**: Se borra al paciente inscrito con todo sus datos
**Actores principales**: Secretario(Administrador)
**Actores secundarios**: Doctora

**Precondiciones**:
* Que exista el paciente registrado al que se desea borrar

**Flujo principal**:
1. El secretario abre un cuadro de diálogo en el menu principal e introduce nombres, apellidos y dni
1. El sistema busca por ésta información al paciente que se desea borrar
1. El sistema pregunta al secretario si esta seguro de borrar al paciente
1. El secretario confirma que quiere efecturar el borrado
1. El sistema borra el paciente si encuentra a este

**Postcondiciones**:

* Se muestran al secretario el usuario que ha sido borrado

**Flujos alternativos**:

4.a. Si no existe el cliente a borrar, se vuelve a preguntar los datos de paciente a borrar.
4.a. Si el secretario no confirma el borrado, se vuelve a preguntar los datos del paciente a borrar.
