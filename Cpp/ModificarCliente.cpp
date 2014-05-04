/*---------------------------------------------------------------------------
MODULO QUE REALIZA UNA MODIFICACION A UN REGISTRO EXISTENTE EN "cliente.bin"
-----------------------------------------------------------------------------*/

//ModificarCliente.cpp
#include "modulos.h"
//---------------------------------------------------------------------------
void modificarCliente(void) {
	
	char respuesta;
	
	do {
		system( "cls" );
		
		unsigned int k;
		int opcion;
		string nombre, apellido, cedula, unaCedula;	
		
		vector <Cliente> vCliente;
		leerRegistro(vCliente, "cliente.bin");
		
		cout << "\n\nINGRESE EL NUMERO DE LA CEDULA DEL CLIENTE: ";
		getline(cin, unaCedula);
			
		if( buscarCedula(k, vCliente, unaCedula) == false ) { 
			cout << "\n\nREGISTRO NO ENCONTRADO.\n\n";
			system("pause");
		}
			
		else { //CONFIRMA EL REGISTRO BUSCADO
			
			cout << "\n\nNOMBRE COMPLETO => " << vCliente.at(k).getNombre() << " "
				 << vCliente.at(k).getApellido() << "\n\n"
				 << "CEDULA => "<< vCliente.at(k).getCedula() << "\n\n\n"
			     << "1 -> CONTINUAR MODIFICACION." << "\n\n"
				 << "2 -> CANCELAR. " << "\n\n\n" << "ESPERANDO RESPUESTA [ ]";
			
			gotoxy(22, 18);
			cin >> opcion;
			
			while(opcion < 1 || opcion > 2) {	
				gotoxy(0, 21);
				cprintf( "OPCION NO VALIDA, VUELVA A INTENTAR." );
				gotoxy(22, 18);
				cin >> opcion;
			}
				
			if( opcion == 2 ) { break; } 
			
			
			formularioRegistroCliente();
			gotoxy(21, 23);
			cprintf( "OTRO REGISTRO A SOBREESCRIBIR?. S/N: [ ]" );
			gotoxy(29, 13);
			getline(cin, nombre);
			gotoxy(31, 16);
			getline(cin, apellido);
			gotoxy(29, 19);
			getline(cin, cedula);
			
			if( cin.fail() ) { mostrarEnCasoDeError(); }
				
			Cliente *unClienteX = new Cliente(nombre, apellido, cedula);
			
			//REEMPLAZANDO LA POSICION DEL REGISTRO ANTERIOR
			vCliente.at(k) = *unClienteX;
			delete unClienteX;
			
			modificarRegistro(vCliente, "cliente.bin");

			gotoxy(59, 23);
			cin >> respuesta;
			cin.clear();
		}
	}while(respuesta == 's' || respuesta == 'S');
}
//---------------------------------------------------------------------------