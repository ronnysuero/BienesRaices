/*--------------------------------------------
MODULO QUE MUESTRA EL TOTAL DE LAS GANANCIAS,
TOMANDO EN CUENTA LAS PROPIEDADES VENDIDAS
---------------------------------------------*/

//CalcularGanancias.cpp
#include "modulos.h"

//---------------------------------------------------------------------------
void calcularGanancias(void) {
	
	system ("cls");
	
	long totalGanacias(0);
	int totalVentas(0);

	vector <Propiedades> vPropiedades;
	leerRegistro(vPropiedades, "propiedades.bin");
	
	for(unsigned int i(0); i < vPropiedades.size(); i++ ) {		
		if( strncmp(vPropiedades.at(i).getStatus(), "Vendida", 7) == 0 ) { 
			totalVentas+=1;
			totalGanacias+=vPropiedades.at(i).getPrecio();
		}
	}

	gotoxy(40, 6);
	cout << "BIENES RAICES RONNY, S.A.\n\n\n"
		 << "TOTAL DE PROPIEDADES VENDIDAS: " << totalVentas << ".\n\n"
		 << "DE LAS CUALES SUMAN UNA GANANCIA EN METALICO DE: " 
		 << totalGanacias << ".00 RD$\n\n\n";
		 
	system( "pause" );
}
//---------------------------------------------------------------------------