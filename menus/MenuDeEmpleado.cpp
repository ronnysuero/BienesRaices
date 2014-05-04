/*-----------------------------------------------------
FUNCION QUE DESPLIEGA EL MENU DE EMPLEADOS DEL SISTEMA
------------------------------------------------------*/
//MenuDeEmpleados.cpp
#include "menus.h"
//---------------------------------------------------------------------------
bool menuDeEmpleados(void) {
	system ( "cls" );
	int opcion;
	bool continuar(true);
	cuadroDeMenu();
	gotoxy (32, 8);
	cprintf ( "-> BIENVENIDO AL MENU DE EMPLEADOS <-" );
	gotoxy (33, 11);
	cprintf ( "1 -> AGREGAR NUEVO EMPLEADO" );
	gotoxy (33, 13);
	cprintf ( "2 -> BUSCAR EMPLEADO EXISTENTE" );
	gotoxy (33, 15);
	cprintf ( "3 -> MODIFICAR EMPLEADO EXISTENTE" );
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
	switch (opcion) {
		case 1:
			agregarEmpleado();
			break;
		case 2:
			buscarEmpleado();
			break;
		case 3:
			modificarEmpleado();
			break;
		case 4:
			continuar=false;
			break;
	}
	return continuar;
}
//---------------------------------------------------------------------------