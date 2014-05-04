/*-----------------------------------------------------
FUNCION QUE DESPLIEGA EL MENU DE CLIENTES DEL SISTEMA
-----------------------------------------------------*/
//MenuDeClientes.cpp
#include "menus.h"
//---------------------------------------------------------------------------
bool menuDeClientes(void) {
	system ( "cls" );
	int opcion;
	bool continuar(true);
	cuadroDeMenu();
	gotoxy (32, 8);
	cprintf ( "-> BIENVENIDO AL MENU DE CLIENTE <-" );
	gotoxy (33, 11);
	cprintf ( "1 -> AGREGAR NUEVO CLIENTE" );
	gotoxy (33, 13);
	cprintf ( "2 -> BUSCAR CLIENTE EXISTENTE" );
	gotoxy (33, 15);
	cprintf ( "3 -> MODIFICAR CLIENTE EXISTENTE" );
	gotoxy (33, 17);
	cprintf ( "4 -> VOLVER ATRAS" );
	gotoxy (33, 20);
	cprintf ( "ESCRIBA AQUI SU SELECCION [ ]" );
	gotoxy (60, 20);
	cin >> opcion;
	
	while ( opcion < 1 || opcion > 4 ){
		gotoxy (33, 22);
		cprintf ( "OPCION INVALIDA, VUELVA A INTENTAR." );
		gotoxy (60, 20);
		cin >> opcion;
	}
	switch( opcion ) {
		case 1:
			agregarCliente();
			break;
		case 2:
			buscarCliente();
			break;
		case 3:
			modificarCliente();
			break; 
		case 4:
			continuar=false;
			break;
	}
	return continuar;
}
//---------------------------------------------------------------------------