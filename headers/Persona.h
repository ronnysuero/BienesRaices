/*---------------------------
CABECERO DE LA CLASE PERSONA 
----------------------------*/

//Persona.h
#include "BienesRaicesRonny.h"

//---------------------------------------------------------------------------
#ifndef PERSONA_H
#define PERSONA_H

class Persona {

	protected:
		char nombre[20];
		char apellido[20];
		char cedula[20];

	public:
		Persona(void);
		Persona(string, string, string);
		virtual ~Persona(void)=0;
		char* getNombre(void);
		char* getApellido(void);
		char* getCedula(void);
};
#endif
//---------------------------------------------------------------------------