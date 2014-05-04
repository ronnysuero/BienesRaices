/*------------------------------
CABECERO DE LA CLASE PROPIEDADES 
--------------------------------*/

//Propiedades.h
#include "BienesRaicesRonny.h"

//---------------------------------------------------------------------------
#ifndef PROPIEDAD_H
#define PROPIEDAD_H

class Propiedades {
	
	private:
		long precio;
		char ID[10];
		char localizacion[80];
		char tipoDePropiedad[10];
		char status[10];
		
	public:	
		Propiedades(void);
		Propiedades(string, string, string, string, long);
		~Propiedades(void);
		void setStatus(string);
		long getPrecio(void);
		char* getID(void);
		char* getLocalizacion(void);
		char* getTipoDePropiedad(void);
		char* getStatus(void);
};
#endif
//---------------------------------------------------------------------------