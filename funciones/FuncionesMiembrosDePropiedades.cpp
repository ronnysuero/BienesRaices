/*-------------------------------------------------------------------------
DEFINICION DE LAS FUNCIONES MIEMBROS Y CONSTRUCTOR DE LA CLASE PROPIEDADES
---------------------------------------------------------------------------*/

//FuncionesMiembrosDePropiedades.cpp
#include "Propiedades.h"

//---------------------------------------------------------------------------
//CONSTRUCTOR POR DEFECTO
Propiedades::Propiedades(void) : precio(0) {
	strcpy( ID, " " );
	strcpy( localizacion, " " );
	strcpy( tipoDePropiedad, " " );
}

//CONSTRUCTOR POR ARGUMENTOS		
Propiedades::Propiedades(string unID, string unaLocalizacion, string unTipoDePropiedad, 
						 string unStatus, long unPrecio) : precio(unPrecio) {
	strcpy( ID, unID.c_str() );
	strcpy( localizacion, unaLocalizacion.c_str() );
	strcpy( tipoDePropiedad, unTipoDePropiedad.c_str() );
	strcpy( status, unStatus.c_str() );
	
}	

//DESTRUCTOR	
Propiedades::~Propiedades(void){ /**/ }

//DEFINICIONES DE LAS FUNCIONES MIEMBROS
void Propiedades::setStatus(string unStatus) { strcpy (status, unStatus.c_str()); }

long Propiedades::getPrecio(void) { return this -> precio; }

char* Propiedades::getID(void) { return this -> ID; }

char* Propiedades::getLocalizacion(void) { return this -> localizacion; }

char* Propiedades::getTipoDePropiedad(void) { return this -> tipoDePropiedad; }

char* Propiedades::getStatus(void) { return this -> status; }

//---------------------------------------------------------------------------