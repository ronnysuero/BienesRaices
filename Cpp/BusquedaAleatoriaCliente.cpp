/*---------------------------------------------------------------------------
MODULO QUE REALIZA UNA BUSQUEDA EN ESPECIFICO DE UN REGISTRO EN "cliente.bin"
-----------------------------------------------------------------------------*/

//BusquedaAleatoriaCliente.cpp
#include "modulos.h"
//---------------------------------------------------------------------------
void busquedaAleatoriaCliente(void) {

	char respuesta;
    
	do{
		system("cls");
			
		unsigned int k;
		string unaCedula;
		int opcion;
			
		vector <Cliente> vCliente;
		//FUNCION QUE CARGA EL VECTOR CON TODOS LOS REGISTROS ALMACENADOS
		leerRegistro(vCliente, "cliente.bin");
			
		cout << "\n\nINGRESE EL NUMERO DE LA CEDULA DEL CLIENTE: " ;
        getline(cin, unaCedula);
			
		if( buscarCedula(k, vCliente, unaCedula) == false ) { 
			system( "cls" );
			cout << "\n\nREGISTRO NO ENCONTRADO.\n\n\n";
			system( "pause" );
			respuesta='N';
		}
		
		else {
			tabularDatosCliente();
			gotoxy(21, 12);
			cprintf( "                                      " );
			gotoxy(21, 19);
            cout << vCliente.at(k).getNombre();
            gotoxy(44 ,19);
			cout << vCliente.at(k).getApellido();
			gotoxy(70, 19);
			cout << vCliente.at(k).getCedula();
			gotoxy(63, 31);
			cin >> respuesta;
			cin.clear();
		}	
	}while(respuesta == 'S' || respuesta == 's' );
}
//---------------------------------------------------------------------------