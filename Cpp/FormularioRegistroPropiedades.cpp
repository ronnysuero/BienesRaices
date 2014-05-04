/*-------------------------------------------------
FUNCION QUE DESPLIEGA EN LA PANTALLA UN FORMULARIO
PARA EL REGISTRO DE DATOS DE LAS PROPIEDADES
---------------------------------------------------*/
//FormularioRegistroPropiedades.cpp
#include "funciones.h"
//---------------------------------------------------------------------------
void formularioRegistroPropiedades(void) {

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
	cprintf( "-> FORMULARIO DE REGISTRO PARA PROPIEDADES <-" );
	gotoxy(21, 11);
	cprintf( "ID:" );
	gotoxy(21, 13);
	cprintf( "LOCALIZACION:" );
	gotoxy(21, 15);
	cprintf( "TIPO DE PROPIEDAD:" );
	gotoxy(21, 17);
	cprintf( "STATUS:" );
	gotoxy(21, 19);
	cprintf( "PRECIO RD$:" );
	gotoxy(21, 23);
    cprintf( "OTRA PROPIEDAD A PROCESAR ? S/N: [ ] ");
}
//---------------------------------------------------------------------------