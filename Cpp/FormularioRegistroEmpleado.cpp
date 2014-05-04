/*-------------------------------------------------
FUNCION QUE DESPLIEGA EN LA PANTALLA UN FORMULARIO
PARA EL REGISTRO DE DATOS DE LOS EMPLEADOS
---------------------------------------------------*/
//FormularioRegistroCliente.cpp
#include "funciones.h"
//---------------------------------------------------------------------------
void formularioRegistroEmpleado(void) {

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
	gotoxy(29, 7);
	cprintf( "-> FORMULARIO DE REGISTRO PARA EMPLEADOS <-" );
	gotoxy(21, 11);
	cprintf( "ID:" );
	gotoxy(21, 13);
	cprintf( "NOMBRE:" );
	gotoxy(21, 15);
	cprintf( "APELLIDO:" );
	gotoxy(21, 17);
	cprintf( "CEDULA:" );
	gotoxy(21, 19);
	cprintf( "SALARIO:" );
	gotoxy(21, 23);
    cprintf( "OTRO EMPLEADO A PROCESAR ? S/N: [ ] ");
}
//---------------------------------------------------------------------------