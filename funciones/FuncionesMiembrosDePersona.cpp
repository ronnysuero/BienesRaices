/*---------------------------------------------------------------------
DEFINICION DE LAS FUNCIONES MIEMBROS Y CONSTRUCTOR DE LA CLASE PERSONA
-----------------------------------------------------------------------*/

//FuncionesMiembrosDePersona.cpp
#include "Persona.h"

//---------------------------------------------------------------------------
//CONSTRUCTOR POR DEFECTO
Persona::Persona(void) {
	strcpy( nombre, " " );
	strcpy( apellido, " " );
	strcpy( cedula, " " );
}

//CONSTRUCTOR POR ARGUMENTOS		
Persona::Persona(string unNombre, string unApellido, string unaCedula) {
	strcpy( nombre, unNombre.c_str() );
	strcpy( apellido, unApellido.c_str() );
	strcpy( cedula, unaCedula.c_str() );
}

//DESTRUCTOR
Persona::~Persona(void){ /**/ };
		
//DEFINICIONES DE FUNCIONES MIEMBROS
char* Persona::getNombre(void) { return this -> nombre; }

char* Persona::getApellido(void) { return this -> apellido; }

char* Persona::getCedula(void) { return this -> cedula; }

//---------------------------------------------------------------------------