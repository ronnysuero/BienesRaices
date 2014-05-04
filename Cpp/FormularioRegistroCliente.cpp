/*-------------------------------------------------
FUNCION QUE DESPLIEGA EN LA PANTALLA UN FORMULARIO
PARA EL REGISTRO DE DATOS DE LOS CLIENTES
---------------------------------------------------*/

//FormularioRegistroCliente.cpp
#include "funciones.h"

//---------------------------------------------------------------------------
void formularioRegistroCliente(void) {

	system( "cls" );
	
	for(int i(0); i < 70; i++) {
		gotoxy(15+i, 5);
		cprintf( "-" );
        gotoxy(15+i, 25);
		cprintf( "-" );
	}

	for(int i(0); i < 20; i++) {
		gotoxy(14, 6+i);
		cprintf( "|" );
        gotoxy(85, 6+i);
		cprintf( "|" );

	}

	gotoxy(14, 5);
	cprintf( "+" );
	gotoxy(85, 5);
	cprintf( "+" );
	gotoxy(14, 25);
	cprintf( "+" );
	gotoxy(85, 25);
	cprintf( "+" );
	gotoxy(29, 8);
	cprintf( "-> FORMULARIO DE REGISTRO PARA CLIENTES <-" );
	gotoxy(21, 13);
	cprintf( "NOMBRE:" );
	gotoxy(21, 16);
	cprintf( "APELLIDO:" );
	gotoxy(21, 19);
	cprintf( "CEDULA:" );
	gotoxy(21, 23);
    cprintf( "OTRO CLIENTE A PROCESAR ? S/N: [ ] ");
}
//---------------------------------------------------------------------------