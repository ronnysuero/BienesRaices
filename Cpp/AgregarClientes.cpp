/*-------------------------------------------
MODULO QUE AGREGA UN NUEVO CLIENTE AL SISTEMA
---------------------------------------------*/

//AgregarClientes.cpp
#include "modulos.h"

//---------------------------------------------------------------------------
void agregarCliente(void) {

	system("cls");
	
	char respuesta;
	string nombre, apellido, cedula;

	do {
		formularioRegistroCliente();
     	gotoxy(29, 13);
     	getline(cin, nombre);
     	gotoxy(31, 16);
     	getline(cin, apellido);
     	gotoxy(29, 19);
     	getline(cin, cedula);
		
		if( cin.fail() ) { mostrarEnCasoDeError(); }

        Cliente *unClienteX = new Cliente(nombre, apellido, cedula);
		guardarRegistro(unClienteX, "cliente.bin");
		delete unClienteX;
		
		gotoxy(53, 23);
		cin >> respuesta;        		
	}while( respuesta == 'S'  ||  respuesta == 's'  );
 }
 //---------------------------------------------------------------------------