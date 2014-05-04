/*----------------------------------------
FUNCION GENERICA QUE REALIZA UNA BUSQUEDA 
EN UN REGISTRO DE CUALQUIER ARCHIVO.BIN
------------------------------------------*/

//buscarID.h
#include "BienesRaicesRonny.h"
//---------------------------------------------------------------------------

#ifndef BUSCARID_H
#define BUSCARID_H

template <typename T>
bool buscarID (unsigned int &indice, vector <T> unVector, string busqueda) {
	
	bool evaluacion(false);
	char unaBusqueda[10];
	strcpy( unaBusqueda, busqueda.c_str() );
	
	for(indice=0; indice < unVector.size(); indice++) {
		if( strncmp(unVector.at(indice).getID(), unaBusqueda, 10) == 0 ) {
			evaluacion = true;
			break;
		}
	}	
	return evaluacion;
}
#endif
//---------------------------------------------------------------------------	