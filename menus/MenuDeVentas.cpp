/*--------------------------------------------------
FUNCION QUE DESPLIEGA EL MENU DE VENTAS DEL SISTEMA
----------------------------------------------------*/
//MenuDeVentas.cpp
#include "menus.h"
//---------------------------------------------------------------------------
bool menuDeVentas(void) {
	system ( "cls" );
	int opcion;
	bool continuar(true);
	cuadroDeMenu();
	gotoxy (32, 8);
	cprintf ( "-> BIENVENIDO AL MENU DE VENTAS <-" );
	gotoxy (33, 12);
	cprintf ( "1 -> VENDER UNA PROPIEDAD" );
	gotoxy (33, 14);
	cprintf ( "2 -> VER VENTAS REALIZADAS" );
	gotoxy (33, 16);
	cprintf ( "3 -> CALCULAR GANANCIAS" );
	gotoxy (33, 18);
	cprintf ( "4 -> VOLVER ATRAS" );
	gotoxy (33, 21);
	cprintf ( "ESCRIBA AQUI SU SELECCION [ ]" );
	gotoxy (60, 21);
	cin >> opcion;

	while ( opcion < 1 || opcion > 4 ){
		gotoxy (33, 23);
		cprintf ( "OPCION INVALIDA, VUELVA A INTENTAR." );
		gotoxy (60, 21);
		cin >> opcion;
	}
	switch( opcion ) {
		case 1:
			agregarVentas();
			break;
		case 2:
		    verVentasRealizadas();
			break;
		case 3:
			calcularGanancias();
			break;
		case 4:
			continuar=false;
			break;
	}
	return continuar;
}
//---------------------------------------------------------------------------