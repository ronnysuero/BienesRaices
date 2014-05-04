/*-----------------------------------------------------------------
FUNCION GENERICA QUE ALMACENA UN REGISTRO EN CUALQUIER ARCHIVO.BIN
-------------------------------------------------------------------*/

//guardarRegistro.h
#include "BienesRaicesRonny.h"
//---------------------------------------------------------------------------

#ifndef GUARDARREGISTRO_H
#define GUARDARREGISTRO_H

template <typename T>
void guardarRegistro (T *unObjeto, string unArchivo) {
	
	//APERTURA DEL ARCHIVO DE ESCRITUTA
	fstream Escritura(unArchivo.c_str(), ios::out | ios::binary | ios::app);
	
	if ( Escritura.fail() ) { mostrarEnCasoDeError(); }
	 
	else { Escritura.write((char*) (unObjeto), sizeof(T)); }
	
	Escritura.close();
}
#endif
//---------------------------------------------------------------------------	