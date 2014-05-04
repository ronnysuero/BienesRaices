/*----------------------------------------------------------------------------
MODULO QUE REALIZA UNA MODIFICACION A UN REGISTRO EXISTENTE EN "empleado.bin"
------------------------------------------------------------------------------*/

//ModificarEmpleado.cpp
#include "modulos.h"
//---------------------------------------------------------------------------
void modificarEmpleado(void) {

	char respuesta;
	
	do {
		system( "cls" );
	
		unsigned int k;
		int opcion;
		float sueldo;
		string ID, nombre, apellido, cedula, unID;

		vector <Empleado> vEmpleado;
		leerRegistro(vEmpleado, "empleado.bin");
			
		cout << "\n\nINGRESE EL NUMERO DEL ID DEL EMPLEADO: ";
		getline(cin, unID);

		if( buscarID(k, vEmpleado, unID) == false ) { 
			cout << "\n\nREGISTRO NO ENCONTRADO.\n\n";
			system("pause");
		}
		
		else {   
			cout << "\n\nID => " << vEmpleado.at(k).getID() << "\n\n"
		         << "NOMBRE COMPLETO => " << vEmpleado.at(k).getNombre() << " "
				 << vEmpleado.at(k).getApellido() << "\n\n"
		         << "CEDULA => " << vEmpleado.at(k).getCedula() << "\n\n"
		         << "SUELDO => " << vEmpleado.at(k).getSueldo() << "\n\n\n"
				 << "1 -> CONTINUAR MODIFICACION." << "\n\n"
				 << "2 -> CANCELAR. " << "\n\n\n" << "ESPERANDO RESPUESTA [ ]";	
			
			gotoxy(22, 22);
			cin >> opcion;
		
			while(opcion < 1 || opcion > 2) {	
				gotoxy(0, 21);
				cprintf( "OPCION NO VALIDA, VUELVA A INTENTAR." );
				gotoxy(22, 18);
				cin >> opcion;
			}
				

			if( opcion == 2 ) { break; }
			
			
			formularioRegistroEmpleado();
			gotoxy(21, 23);
			cprintf( "OTRO REGISTRO A SOBREESCRIBIR?. S/N: [ ]" );
			gotoxy(25, 11);
			cin >> ID;
			gotoxy(29, 13);
			cin >> nombre;
			gotoxy(31, 15);
			cin >> apellido;
			gotoxy(29, 17);
			cin >> cedula;
			gotoxy(30, 19);
			cin >> sueldo;
				
			if( cin.fail() ) { mostrarEnCasoDeError(); }
			
			Empleado *unEmpleadoX = new Empleado(ID, nombre, apellido, cedula, sueldo);
				
			vEmpleado.at(k) = *unEmpleadoX;
			delete unEmpleadoX;
			modificarRegistro(vEmpleado, "empleado.bin");
		
			gotoxy(59, 23);
			cin >> respuesta;
			cin.clear();
		}
	}while(respuesta == 's' || respuesta == 'S');
}
//---------------------------------------------------------------------------