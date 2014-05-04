/*---------------------------------------------
DEFINICION DEL CONSTRUCTOR DE LA CLASE CLIENTE
-----------------------------------------------*/

//ConstructorDeCliente.cpp
#include "Cliente.h"
     
//---------------------------------------------------------------------------
//CONSTRUCTOR POR DEFECTO
Cliente::Cliente(void) {
	strcpy( nombre, " " );
	strcpy( apellido, " " );
	strcpy( cedula, " " );
}

//CONSTRUCTOR POR ARGUMENTOS
Cliente::Cliente (string unNombre, string unApellido, string unaCedula) {
    strcpy( nombre, unNombre.c_str() );
	strcpy( apellido, unApellido.c_str());
	strcpy( cedula, unaCedula.c_str() );
}

//DESTRUCTOR
Cliente::~Cliente(void){ /**/ };
//---------------------------------------------------------------------------
