/*---------------------------------------------
FUNCION QUE DESPLIEGA EN LA PANTALLA UN CUADRO 
DONDE SE TABULARAN LOS DATOS DE LOS EMPLEADOS
-----------------------------------------------*/
//TabularDatosEmpleado.cpp
#include "funciones.h"
//---------------------------------------------------------------------------
void tabularDatosEmpleado(void) {
	
	system( "cls" );
	
	for(int i(0); i < 88; i++) {
		gotoxy(7+i, 5);
		cprintf( "-" );
        gotoxy(7+i, 34);
		cprintf( "-" );
	}
	
	for(int i(0); i < 28; i++) {
		gotoxy(6, 6+i);
		cprintf( "|" );
        gotoxy(95, 6+i);
		cprintf( "|" );
	}

	gotoxy(6, 5);
	cprintf( "+" );
	gotoxy(95, 5);
	cprintf( "+" );
	gotoxy(6, 34);
	cprintf( "+" );
	gotoxy(95, 34);
	cprintf( "+" );
	gotoxy(35, 8);
	cprintf( "-> BASE DE DATOS DE EMPLEADOS <-" );
	gotoxy(8, 17);
	cprintf( "ID" );
	gotoxy(21, 17);
	cprintf( "NOMBRE" );
	gotoxy(40, 17);
	cprintf( "APELLIDO" );
	gotoxy(60, 17);
	cprintf( "CEDULA" );
	gotoxy(80, 17);
	cprintf( "SUELDO" );
	gotoxy(32, 31);
    cprintf( "OTRA BUSQUEDA A PROCESAR ? S/N: [ ] ");
}
//---------------------------------------------------------------------------