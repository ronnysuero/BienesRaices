/*---------------------------
CABECERO DE LA CLASE CLIENTE
----------------------------*/

//Cliente.h
#include "Persona.h"

//---------------------------------------------------------------------------
#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente : public Persona { 

	public:
		Cliente(void);
		Cliente(string, string, string);
		~Cliente(void);
};
#endif
//---------------------------------------------------------------------------
