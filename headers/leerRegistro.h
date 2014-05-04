/*------------------------------------------------
FUNCION GENERICA QUE ALMACENA TODOS LOS REGISTROS
DE CUALQUIER ARCHIVO.BIN EN UN VECTOR<>
-------------------------------------------------*/

//leerRegistro.h
#include "BienesRaicesRonny.h"
//---------------------------------------------------------------------------

#ifndef LEERREGISTRO_H
#define LEERREGISTRO_H

template <typename T>
void leerRegistro(vector <T> &unVector, string unArchivo) {

	//APERTURA DEL ARCHIVO DE LECTURA
	fstream Lectura(unArchivo.c_str(), ios::in | ios::binary);

	if ( Lectura.fail() ) { mostrarEnCasoDeError(); }

	else {

		unsigned int longRegistro;
		Lectura.seekg(0, ios::end); //POSICIONA EL PUNTERO AL FINAL
		longRegistro = Lectura.tellg(); //OBTIENE LA POSICION ACTUAL

		//ANALIZA SI EL ARCHIVO ESTA VACIO
		if(longRegistro / sizeof(T) == 0) { mostrarEnCasoDeError(); }

		Lectura.seekg(0, ios::beg); //REPOSICIONA EL PUNTERO AL PRINCIPIO
		T *unObjeto = new T; //CREA UN OBJETO DE UNA CLASE TIPO GENERICA

		//LECTURA ADELANTADA PARA QUE EL ULTIMO REGISTRO NO APAREZCA 2 VECES
		Lectura.read(reinterpret_cast <char *> (unObjeto), sizeof(T));

		while( !Lectura.eof() ) {
			//ESCRIBE EN EL VECTOR EL REGISTRO LEIDO
			unVector.push_back(*unObjeto);

			//LEE OTRO REGISTRO
			Lectura.read(reinterpret_cast <char *> (unObjeto), sizeof(T));
		}//FIN DE LA CARGA DE LOS REGISTROS AL VECTOR<>

		Lectura.close();
		delete unObjeto;
	}
}
#endif
//---------------------------------------------------------------------------