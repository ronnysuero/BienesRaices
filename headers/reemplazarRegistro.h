/*--------------------------------------------------------------------
FUNCION GENERICA QUE REEMPLAZA TODOS REGISTRO DE CUALQUIER ARCHIVO.BIN
----------------------------------------------------------------------*/

//reemplazarRegistro.h
#include "BienesRaicesRonny.h"
//---------------------------------------------------------------------------

#ifndef REEMPLAZARREGISTRO_H
#define REEMPLAZARREGISTRO_H

template <typename T>
void modificarRegistro (vector <T> unVector, string unArchivo) {
	
	//APERTURA DEL ARCHIVO DE ESCRITUTA, BORRANDO TODO EL CONTENIDO DEL ARCHIVO
	fstream SobreEscritura(unArchivo.c_str(), ios::out | ios::trunc);
	
	if ( SobreEscritura.fail() ) { mostrarEnCasoDeError(); }
	 
	else { 
		
		for(unsigned int indice(0); indice < unVector.size(); indice++) {
			//COPIAR TODOS LOS REGISTROS ALMACENADOS DEL VECTOR AL ARCHIVO
			SobreEscritura.write((char *) (&unVector.at(indice)), sizeof(T));
		}
	}
	SobreEscritura.close();
}
#endif
//---------------------------------------------------------------------------	