/*----------------------------
CABECERO DE LA CLASE EMPLEADO 
-----------------------------*/

//Empleado.h
#include "Persona.h"

//---------------------------------------------------------------------------
#ifndef EMPLEADO_H
#define EMPLEADO_H

class Empleado: public Persona {
	
	private:
		char ID[10]; 
		float sueldo;
		
	public:
		Empleado(void);
		Empleado(string, string, string, string, float);
		~Empleado(void);
		char* getID(void);
		float getSueldo(void);
};
#endif
//---------------------------------------------------------------------------