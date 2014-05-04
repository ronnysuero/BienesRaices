/*-------------------------------------------------------------------------------
MODULO QUE REALIZA UNA BUSQUEDA EN ESPECIFICO DE UN REGISTRO EN "propiedades.bin"
---------------------------------------------------------------------------------*/
//BusquedaAleatoriaPropiedades.cpp
#include "modulos.h"
//---------------------------------------------------------------------------
void busquedaAleatoriaPropiedades(void) {

	char respuesta; 
	
	do{
		system("cls");
		unsigned int k;
		string unID;
        int opcion;

		vector <Propiedades> vPropiedadesX;
		leerRegistro(vPropiedadesX, "propiedades.bin");    
			
		cout << "\n\nINGRESE EL NUMERO DEL ID DE LA PROPIEDAD: " ;
        getline(cin, unID);
			
		if( buscarID(k, vPropiedadesX, unID) == false ) { 
			system( "cls" );
			cout << "\n\nREGISTRO NO ENCONTRADO.\n\n\n";
			system( "pause" );
			respuesta='N';
		}
		else {
			tabularDatosPropiedades();
			gotoxy(21, 12);
			cprintf( "                                      " );	
			gotoxy(22, 17);	
			cout << vPropiedadesX.at(k).getID();
			gotoxy(32, 19);
			cout << vPropiedadesX.at(k).getLocalizacion();
			gotoxy(37, 21);
			cout << vPropiedadesX.at(k).getTipoDePropiedad();
			gotoxy(26, 23);
			cout << vPropiedadesX.at(k).getStatus();
			gotoxy(30, 25);
			cout << vPropiedadesX.at(k).getPrecio() << ".00";
 			gotoxy(63, 31);
			cin >> respuesta;
			cin.clear();
		}
	}while(respuesta == 'S' || respuesta == 's' );
}
//---------------------------------------------------------------------------