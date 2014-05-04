/*---------------------------------------------
MODULO QUE AGREGA UN NUEVO EMPLEADO AL SISTEMA
----------------------------------------------*/

//AgregarEmpleados.cpp
#include "modulos.h"

//---------------------------------------------------------------------------
void agregarEmpleado(void) {
	
	system("cls");
	
	char respuesta;
	float sueldo;
	string ID, nombre, apellido, cedula;

	do{
		formularioRegistroEmpleado();
        gotoxy(25, 11);
        getline(cin, ID);
        gotoxy(29, 13);
        getline(cin, nombre);
        gotoxy(31, 15);
        getline(cin, apellido);
        gotoxy(29, 17);
        getline(cin, cedula);
        gotoxy(30, 19);
		cin >> sueldo;
		
		if( cin.fail() ) { mostrarEnCasoDeError(); }

		Empleado *unEmpleadoX = new Empleado(ID, nombre, apellido, cedula, sueldo);
		guardarRegistro(unEmpleadoX, "empleado.bin");
		delete unEmpleadoX;
		
		gotoxy(54, 23);
		cin >> respuesta;
   	}while( respuesta == 'S'  ||  respuesta == 's'  );
}
 //---------------------------------------------------------------------------