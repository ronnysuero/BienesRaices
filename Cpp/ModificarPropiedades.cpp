/*---------------------------------------------------------------------
MODULO QUE REALIZA UNA SOBREESCRITURA DE REGISTROS EN "propiedades.bin"
-----------------------------------------------------------------------*/
//ModificarPropiedades.cpp
#include "modulos.h"

//---------------------------------------------------------------------------
void modificarPropiedades(void) {
	
	char respuesta;
	
	do {
		system( "cls" );
		
		unsigned int k;
		int opcion;
		string localizacion, tipoDePropiedad, ID, status, unID;
		long precio;
		
		vector <Propiedades> vPropiedadesX;
		leerRegistro(vPropiedadesX, "propiedades.bin");

		cout << "\n\nINGRESE EL NUMERO DEL ID DE LA PROPIEDAD: ";
		getline(cin, unID);
		
		if ( buscarID(k, vPropiedadesX, unID) == false ) {
			cout << "\n\nREGISTRO NO ENCONTRADO.\n\n";
			system("pause");
		}
		
		else {
			cout << "\n\nID => " << vPropiedadesX.at(k).getID()
		         << "\n\nLOCALIZACION => " << vPropiedadesX.at(k).getLocalizacion()
				 << "\n\nTIPO DE PROPIEDAD => " 
				 << vPropiedadesX.at(k).getTipoDePropiedad()
		         << "\n\nSTATUS => " << vPropiedadesX.at(k).getStatus()
		         << "\n\nPRECIO => " << vPropiedadesX.at(k).getPrecio() << ".00 RD$"
				 << "\n\n\n1 -> CONTINUAR MODIFICACION."
				 << "\n\n2 -> CANCELAR. " << "\n\n\n"
				 << "ESPERANDO RESPUESTA [ ]";	
			gotoxy(22, 22);
			cin >> opcion;
					
			while(opcion < 1 || opcion > 2) {
				gotoxy(0, 21);
				cprintf( "OPCION NO VALIDA, VUELVA A INTENTAR." );
				gotoxy(22, 18);
				cin >> opcion;
			}
				
			if( opcion == 2 ) { break; }
			
			formularioRegistroPropiedades();
			gotoxy(21, 23);
			cprintf( "OTRO REGISTRO A SOBREESCRIBIR?. S/N: [ ]" );
			gotoxy(25, 11);
			getline(cin, ID);
			gotoxy(35, 13);
			getline(cin, localizacion);
			gotoxy(40, 15);
			getline(cin, tipoDePropiedad);
			gotoxy(29, 17);
			getline(cin, status);
			gotoxy(33, 19);
			cin >> precio;
			
			if( cin.fail() ) { mostrarEnCasoDeError(); }
								
			Propiedades *unaPropiedadX = new Propiedades(ID, localizacion, 
														 tipoDePropiedad,
														 status, precio);
				
			vPropiedadesX.at(k) = *unaPropiedadX;
			delete unaPropiedadX;
			modificarRegistro(vPropiedadesX, "propiedades.bin");
			
			gotoxy(59, 23);
			cin >> respuesta;
			cin.clear();
		}//FIN DEL BLOQUE DE LECTURA / VISUALIZACION
	}while(respuesta == 's' || respuesta == 'S');
}
//---------------------------------------------------------------------------