### Persona
Es la clase padre que, mediante polimorfismo, heredaran los tres roles que encontramos en nuestro sistema que son: secretario, médico y paciente

| Datos  |||
| -------|------- |---|
| Dni | cadena |Es el documento de identificador de cada persona y es único|
| Nombre | cadena |Se almacena el nombre sin apellidos de la persona|
| Apellidos | cadena |Se almacena los dos apellidos de la persona|
| Teléfono | cadena |Se almacena el número de contacto de la persona|
| FechaNacimiento | fecha |Almacena día mes y año del nacimiento de la persona|

| Métodos  ||
| -------|------- |
|Persona|Constructor de la clase. Permite inicializar todos los parámetros imprescindibles para el uso de la clase|
|getApellidos|Proporciona los apellidos de la persona|
|setApellidos|Modifica los apellidos de la persona|
|getTeléfono|Proporciona el número de contacto de la persona|
|setTeléfono|Modifica el número de contacto de la persona|
|getFechaNacimiento|Proporciona la fecha de nacimiento de la persona|
|setFechaNacimiento|Modifica la fecha de nacimiento de la persona|
|getDNI|Proporciona el dni de la persona|
|setDNI|Modifica el dni de la persona|
