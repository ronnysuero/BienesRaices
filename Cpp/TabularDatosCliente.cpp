/*---------------------------------------------
FUNCION QUE DESPLIEGA EN LA PANTALLA UN CUADRO 
DONDE SE TABULARAN LOS DATOS DE LOS CLIENTES
-----------------------------------------------*/

//TabularDatosCliente.cpp
#include "funciones.h"

//---------------------------------------------------------------------------
void tabularDatosCliente(void) {

	system( "cls" );

	for(int i(0); i < 70; i++) {
		gotoxy(15+i, 5);
		cprintf( "-" );
        gotoxy(15+i, 34);
		cprintf( "-" );
	}

	for(int i(0); i < 28; i++) {
		gotoxy(14, 6+i);
		cprintf( "|" );
        gotoxy(85, 6+i);
		cprintf( "|" );
	}
	
	gotoxy(14, 5);
	cprintf( "+" );
	gotoxy(85, 5);
	cprintf( "+" );
	gotoxy(14, 34);
	cprintf( "+" );
	gotoxy(85, 34);
	cprintf( "+" );
	gotoxy(35, 8);
	cprintf( "-> BASE DE DATOS DE CLIENTES <-" );
	gotoxy(21, 17);
	cprintf( "NOMBRE" );
	gotoxy(44, 17);
	cprintf( "APELLIDO" );
	gotoxy(70, 17);
	cprintf( "CEDULA" );
	gotoxy(30, 31);
    cprintf( "OTRA BUSQUEDA A PROCESAR ? S/N: [ ] ");
}
//---------------------------------------------------------------------------