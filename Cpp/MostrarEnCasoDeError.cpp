/*--------------------------------------------------------
 FUNCION QUE SE EJECUTA EN CASO DE ALGUN ERROR INESPERADO
----------------------------------------------------------*/

//MostrarEnCasoDeError.cpp
#include "funciones.h"

//---------------------------------------------------------------------------
void mostrarEnCasoDeError(void) {

	system ("cls");

	gotoxy(29, 7);
	cprintf( "!!!!!!!!! ATENCION !!!!!!!!!!!" );
	gotoxy(17, 10);
	cprintf( "EL SISTEMA HA DETECTADO UNA ANOMALIA Y DEBE CERRARSE" );
	gotoxy(13, 16);
    cprintf("ENTRE LAS CAUSAS MAS COMUNES CAUSANTE DE ESTE MENSAJE ESTAN:");
	gotoxy(20, 20);
	cprintf( "1- FALTA DE MEMORIA RAM." );
	gotoxy(20, 23);
	cprintf( "2- UNO O VARIOS DATO(S) INTRODUCIDOS ERRONEAMENTE." );
	gotoxy(20, 26);
	cprintf( "3- SI ESTA ACCESANDO A UN ARCHIVO, PUEDE QUE NO EXISTA" );
	gotoxy(23, 27);
	cprintf( "O ESTE SIENDO USADO POR OTRO PROGRAMA." );
	gotoxy(28, 33);
	cprintf( "PRESIONE UNA TECLA PARA CONTINUAR" );
	gotoxy(61, 33);
	
	getch();
	exit(1);
}
//---------------------------------------------------------------------------