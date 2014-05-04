/*------------------------------------------------
FUNCION QUE DESPLIEGA UN CUADRO EN FORMA DE FLECHA
--------------------------------------------------*/

//CuadroDeMenu.cpp
#include "funciones.h"

//---------------------------------------------------------------------------
void cuadroDeMenu(void) {

	system ( "cls" );

	for (int i(10); i<83; i++){
		gotoxy (i, 5);
		cprintf ("*");
		gotoxy (i, 24);
		cprintf ("*");
	}

	for (int i(5); i < 16; i++){
		gotoxy (5+i, i);
		cprintf( "*" );
        gotoxy (77+i, i);
		cprintf( "*" );
	}

	for (int i(14); i < 25; i++){
		gotoxy (34-i, i);
		cprintf( "*" );
	}

	for (int i(15); i < 25; i++){
		gotoxy (107-i, i);
		cprintf( "*" );
	}
}
//---------------------------------------------------------------------------