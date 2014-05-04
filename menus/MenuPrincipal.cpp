/*--------------------------------------------------
FUNCION QUE DESPLIEGA EL MENU PRINCIPAL DEL SISTEMA
---------------------------------------------------*/
//MenuPrincipal.cpp
#include "menus.h"
//---------------------------------------------------------------------------
void menuPrincipal(int &opcion) {

    system ( "cls" );
    system ( "color f0" );

	cout << "\n\n\n\n\n\n\n"
         << "\t\t     ***********************                 ************\n"
	     << "\t\t    **********************  *               **************\n"
	     << "\t\t   **********************    *             ****************\n"
	     << "\t\t  **********************      *           ******************\n"
	     << "\t\t **********************        *           ****************\n"
	     << "\t\t*********************************           **************\n"
	     << "\t\t*                    *          *                ****\n"
	     << "\t\t*      ******        *  ******  *                ****\n"
	     << "\t\t*      ******        *  *    *  *                ****\n"
	     << "\t\t*      ******        *  *   **  *                ****\n"
	     << "\t\t*                    *  *    *  *                ****\n"
	     << "\t\t*********************************                ****\n\n"
	     << "\t\t\t\tBIENES RAICES RONNY, S.A.";

    textcolor( WHITE );
    textbackground( BLACK );

    for (int k(10); k<82; k++){
       	gotoxy (k, 5);
		cprintf ("*");
		gotoxy (k, 24);
		cprintf ("*");
    }

    for (int i(5); i < 25; i++){
		gotoxy (10, i);
		cprintf( "*" );
		gotoxy (81, i);
		cprintf( "*" );
    }
    normvideo();
    gotoxy (18, 27);
    cprintf ( "1 -> MENU DE CLIENTES" );
    gotoxy (52, 27);
    cprintf ( "2 -> MENU DE EMPLEADOS" );
    gotoxy (18, 28);
    cprintf ( "3 -> MENU DE PROPIEDADES" );
    
	gotoxy (52, 28);
    cprintf ( "4 -> MENU DE VENTAS" );
    gotoxy (33, 30);
    cprintf ( "5 -> SALIR DEL SISTEMA" );
    gotoxy (10, 32);
    cprintf ( "ESCRIBA AQUI SU SELECCION [ ]" );
    gotoxy (37,32 );
	cin >> opcion;

	while ( opcion < 1 || opcion > 5 ){
		gotoxy (30, 34);
		cprintf ( "OPCION INVALIDA, VUELVA A INTENTAR." );
		gotoxy (37, 32 );
		cin >> opcion;
	}
}
//---------------------------------------------------------------------------