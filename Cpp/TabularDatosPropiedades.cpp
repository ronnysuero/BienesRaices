/*----------------------------------------------
FUNCION QUE DESPLIEGA EN LA PANTALLA UN CUADRO 
DONDE SE TABULARAN LOS DATOS DE LAS PROPIEDADES
------------------------------------------------*/
//TabularDatosPropiedades.cpp
#include "funciones.h"
//---------------------------------------------------------------------------
void tabularDatosPropiedades(void) {

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
	gotoxy(33, 8);
	cprintf( "-> BASE DE DATOS DE PROPIEDADES <-" );
	gotoxy(18, 17);
	cprintf( "ID:" );
	gotoxy(18, 19);
	cprintf( "LOCALIZACION: " );
	gotoxy(18, 21);
	cprintf( "TIPO DE PROPIEDAD: " );
	gotoxy(18, 23);
	cprintf( "STATUS:" );
	gotoxy(18, 25);
	cprintf( "PRECIO RD$: " );
	gotoxy(30, 31);
    cprintf( "OTRA BUSQUEDA A PROCESAR ? S/N: [ ] ");
}
//---------------------------------------------------------------------------