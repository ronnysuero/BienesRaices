/*----------------------------------------------------------------
MODULO QUE REALIZA UNA BUSQUEDA DE REGISTROS EN "propiedades.bin"
-----------------------------------------------------------------*/

//BuscarPropiedades.cpp
#include "modulos.h"

//---------------------------------------------------------------------------
void buscarPropiedades(void) {

	system( "cls" );
	
	int respuesta;

	gotoxy(10, 5);
	cprintf("-> PRESIONE A CONTINUACION:");
	gotoxy(10, 8);
	cprintf("1 -> Ver Todos Los Registros Almacenados de las Propiedades:");
	gotoxy(10, 10);
	cprintf("2 -> Busqueda En Especifico De Un Registro Almacenado:");
	gotoxy(10, 14);
	cprintf("SELECCIONE SU OPCION: [ ]");
	gotoxy(33, 14);
	cin >> respuesta;

	while(respuesta < 1 || respuesta > 2) {
		gotoxy(10, 16);
		cprintf("OPCION INVALIDA, VUELVA A INTENTAR.");
		gotoxy(33, 14);
		cin >> respuesta;
	}

	switch(respuesta) {

		case 1:
			mostrarBaseDeDatosPropiedades();
			break;

		case 2:
			 busquedaAleatoriaPropiedades();
			 break;
	}
}
//---------------------------------------------------------------------------