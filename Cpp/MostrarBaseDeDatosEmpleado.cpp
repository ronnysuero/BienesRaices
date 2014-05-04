/*-------------------------------------------------------------------
MODULO QUE IMPRIME EN PANTALLA TODOS LOS REGISTROS DE "empleado.bin"
---------------------------------------------------------------------*/

//MostrarBaseDeDatosEmpleado.cpp
#include "modulos.h"

//---------------------------------------------------------------------------
void mostrarBaseDeDatosEmpleado(void) {
     
	system( "cls" );

	int i(0);
	vector <Empleado> vEmpleado;
	leerRegistro(vEmpleado, "empleado.bin");
	
	tabularDatosEmpleado();
	gotoxy(10, 12);
	cprintf( "                                      " );
	gotoxy(32, 31);
	cprintf( "                                     " );
		
	for(unsigned int k(0); k < vEmpleado.size(); k++) {
		gotoxy(8, 19+i);
		cout << vEmpleado.at(k).getID();
		gotoxy(21, 19+i);
		cout << vEmpleado.at(k).getNombre();
		gotoxy(40, 19+i);
		cout << vEmpleado.at(k).getApellido();
		gotoxy(60, 19+i);
		cout << vEmpleado.at(k).getCedula();
		gotoxy(80, 19+i);
		cout << vEmpleado.at(k).getSueldo() << ".00";
		i++;
	}
	
	gotoxy(32, 31);
    cprintf( "PRESIONE UNA TECLA PARA CONTINUAR.");
    getch();
}
//---------------------------------------------------------------------------