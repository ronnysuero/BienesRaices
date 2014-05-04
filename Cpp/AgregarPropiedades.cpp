/*-----------------------------------------------
MODULO QUE AGREGA UNA NUEVA PROPIEDAD AL SISTEMA
------------------------------------------------*/

//AgregarPropiedades.cpp
#include "modulos.h"

//---------------------------------------------------------------------------
void agregarPropiedades(void) {

	system("cls");
	
	char respuesta;
	string localizacion, tipoDePropiedad, ID, status("No vendida");
	long precio;

	do{
		formularioRegistroPropiedades();
		gotoxy(29, 17);
		cout << status;
		gotoxy(25, 11);
		getline(cin, ID);
		gotoxy(35, 13);
		getline(cin, localizacion);
		gotoxy(40, 15);
		getline(cin, tipoDePropiedad);
		gotoxy(33, 19);
		cin >> precio;
		
		if( cin.fail() ) { mostrarEnCasoDeError(); }
			
		Propiedades *unaPropiedadX = new Propiedades(ID, localizacion, 
		   										     tipoDePropiedad, 
							                         status, precio);
		guardarRegistro(unaPropiedadX, "propiedades.bin");
		delete unaPropiedadX;
		
		gotoxy(55, 23);
		cin >> respuesta;
	}while( respuesta == 'S'  ||  respuesta == 's'  );
}
//---------------------------------------------------------------------------