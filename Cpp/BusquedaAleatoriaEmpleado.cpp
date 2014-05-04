/*----------------------------------------------------------------------------
MODULO QUE REALIZA UNA BUSQUEDA EN ESPECIFICO DE UN REGISTRO EN "empleado.bin"
------------------------------------------------------------------------------*/
//LecturaAleatoriaEmpleado.cpp
#include "modulos.h"
//---------------------------------------------------------------------------
void busquedaAleatoriaEmpleado(void) {

	char respuesta;
	
	do{
		system("cls");
		unsigned int k;
        string unID;
        int opcion;

		vector <Empleado> vEmpleado;
		leerRegistro(vEmpleado, "empleado.bin");
		
		cout << "\n\nINGRESE EL NUMERO DEL ID DEL EMPLEADO: " ;
        getline(cin, unID);
		
		if( buscarID(k, vEmpleado, unID) == false ) { 	
			system( "cls" );
			cout << "\n\nREGISTRO NO ENCONTRADO.\n\n\n";
			system( "pause" );
			respuesta='N';
		}
		else {	
			tabularDatosEmpleado();
			gotoxy(21, 12);
			cprintf( "                                      " );			
			gotoxy(8, 19);
	       	cout<< vEmpleado.at(k).getID();
	       	gotoxy(21, 19);
	       	cout<< vEmpleado.at(k).getNombre();
	       	gotoxy(40, 19);
	       	cout<< vEmpleado.at(k).getApellido();
		    gotoxy(60, 19);
		    cout<< vEmpleado.at(k).getCedula();
	      	gotoxy(80, 19);
	       	cout<< vEmpleado.at(k).getSueldo();	
			gotoxy(65, 31);
			cin >> respuesta;
			cin.clear();		
		}// FIN DEL BLOQUE DE LECTURA / VISUALIZACION
	}while(respuesta == 'S' || respuesta == 's' );
}
//---------------------------------------------------------------------------