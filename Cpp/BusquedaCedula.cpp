/*--------------------------------------------------------------
FUNCION QUE REALIZA UNA BUSQUEDA DE UN REGISTRO EN "cliente.bin"
---------------------------------------------------------------*/

//BusquedaCedula.cpp
#include "funciones.h"

//---------------------------------------------------------------------------
bool buscarCedula (unsigned int &indice, vector <Cliente> unVector, string busqueda) {
	
	bool evaluacion(false);
	char unaBusqueda[20];
	strcpy( unaBusqueda, busqueda.c_str() );
	
	for(indice=0; indice < unVector.size(); indice++) {
		if( strncmp(unVector.at(indice).getCedula(), unaBusqueda, 20) == 0 ) {
			evaluacion = true;
			break;
		}
	}	
	return evaluacion;
}
//---------------------------------------------------------------------------