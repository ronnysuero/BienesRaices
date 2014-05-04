/*------------------------------------------------------------------
MODULO QUE IMPRIME EN PANTALLA TODOS LOS REGISTROS DE "cliente.bin"
--------------------------------------------------------------------*/

//MostrarBaseDeDatosClientes.cpp
#include "modulos.h"
//---------------------------------------------------------------------------
void mostrarBaseDeDatosCliente(void) {

	int i(0);
	vector <Cliente> vCliente;
	leerRegistro(vCliente, "cliente.bin");
	
	tabularDatosCliente();
	gotoxy(21, 12);
	cprintf( "                                      " );
	gotoxy(30, 31);
	cprintf( "                                    " );
		
	for(unsigned int k(0); k < vCliente.size(); k++) {
		gotoxy(21, 19+i);
		cout << vCliente.at(k).getNombre();
		gotoxy(44 ,19+i);
		cout << vCliente.at(k).getApellido();
		gotoxy(70, 19+i);
		cout << vCliente.at(k).getCedula() << "\n";
		i++;		
	}
	
	gotoxy(30, 31);
    cout << "PRESIONE UNA TECLA PARA CONTINUAR.";
    getch();
}
//---------------------------------------------------------------------------