/*----------------------------------------------------------------------
DEFINICION DE LAS FUNCIONES MIEMBROS Y CONSTRUCTOR DE LA CLASE EMPLEADO
------------------------------------------------------------------------*/

//FuncionesMiembrosDeEmpleado.h
#include "BienesRaicesRonny.h"

//CONSTRUCTOR POR DEFECTO
Empleado::Empleado(void) : sueldo(0) {
	strcpy( ID, " " );
	strcpy( nombre, " " );
	strcpy( apellido, " " );
	strcpy( cedula, " " );
}

//CONSTRUCTOR POR ARGUMENTOS
Empleado::Empleado(string unID, string unNombre, string unApellido, 
				   string unaCedula, float unSueldo) : sueldo(unSueldo) {
	strcpy( ID, unID.c_str() );
	strcpy( nombre, unNombre.c_str() );
	strcpy( apellido, unApellido.c_str() );
	strcpy( cedula, unaCedula.c_str() );
}

//DESTRUCTOR
Empleado::~Empleado(void) { /**/ }

//DEFINICION DE LAS FUNCIONES MIEMBROS
char* Empleado::getID(void) { return this -> ID; }

float Empleado::getSueldo(void) { return this -> sueldo; }

//---------------------------------------------------------------------------